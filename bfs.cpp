#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> graph[N];
bool vis[N];

void bfs(int source)
{
    queue<int> q;
   
    q.push(source);
    vis[source] = true;

    while (!q.empty())
    {
        int current = q.front();
        cout<<current<<" ";
        q.pop();


        for (auto child : graph[current])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
            }
        }
    }
}

int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(0);

        
    return 0;
}