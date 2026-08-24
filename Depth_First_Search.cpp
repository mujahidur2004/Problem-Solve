#include <bits/stdc++.h>
using namespace std;
const int N = 110;
vector<int> graph[N];
bool visited[N];
vector<int> result[N];
int cnt = 0;
void dfs(int cur_node)
{
    cnt++;
    visited[cur_node] = 1;
    result[cur_node].push_back(cnt);
    for (auto ele : graph[cur_node])
    {
        if (visited[ele])
        {
        }
        else
        {
            dfs(ele);
        }
    }
    cnt++;
    result[cur_node].push_back(cnt);
}

int main()
{
    int n;
    cin >> n;

    int v, k, ele;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        cin >> k;
        while (k--)
        {
            cin >> ele;
            graph[v].push_back(ele);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << result[i][0] << " " << result[i][1] << endl;
    }
}