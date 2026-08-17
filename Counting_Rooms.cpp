/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd
const int N = 1000 + 5;
int n, m;
vector<bool> visited[N];
vector<char> graph[N];
void dfs(int x, int y)
{
    visited[x][y]=1;
    if(x-1>0 && !visited[x-1][y]){
        dfs(x-1,y);
    }
    if(y-1>0 && !visited[x][y-1]){
        dfs(x,y-1);
    }
    if(x+1 <=n && !visited[x+1][y]){
        dfs(x+1,y);
    }
    if(y+1<=m && !visited[x][y+1]){
        dfs(x,y+1);
    }

}
int main()
{
    fast_io;
    cin >> n >> m;
     for (int i = 0; i < N; i++)
    {
        visited[i].resize(N, false);
        graph[i].resize(N);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == '#')
            {
                visited[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!visited[i][j])
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << nl;

    return 0;
}