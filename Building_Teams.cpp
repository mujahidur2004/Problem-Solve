#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

vector<int> graph[N];
bool vis[N];
vector<bool> ans(N);

bool bfs(int source)
{
    queue<int> q;

    q.push(source);
    vis[source] = true;
    ans[source] = 0;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (auto child : graph[current])
        {
            if (!vis[child])
            {
                vis[child] = true;

                // Opposite team
                ans[child] = !ans[current];

                q.push(child);
            }
            else
            {
                // Same team -> impossible
                if (ans[child] == ans[current])
                {
                    return false;
                }
            }
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (!bfs(i))
            {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] + 1 << " ";
    }

    cout << '\n';

    return 0;
}