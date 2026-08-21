#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<bool> visited(N, 0);
vector<vector<int>> v(N);
vector<int> res;
int ck = 0;
int last =0;

void dfs(int parent, int current)
{
    visited[current] = 1;
    res.push_back(current);

    for (auto u : v[current])
    {
        if (visited[u] && u == parent)
            continue;

        if (visited[u] && u != parent)
        {
            res.push_back(u);
            last=u;
            ck = 1;
            return;
        }

        if (!visited[u] && !ck)
        {
            dfs(current, u);

            // নিচেরটা খুব important
            if (ck)
                return;
        }
    }

    if (!ck)
        res.pop_back();
}

int main()
{
    int n, m;
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++)
    {

        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if(ck)break;
        if ( !visited[i])
        {
            fill(visited.begin(), visited.end(), false);
            res.clear();
            dfs(0, i);
        }
    }
    
    int sz=res.size();
    vector<int>res1;
    for(int i=sz-2;i>=0;i--){
        if(res[i] == last)break;
        res1.push_back(res[i]);
    }
    if(res1.size()+2<4){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    cout << res1.size()+2 << endl;
    cout<<last<<" ";
    for(int i= res1.size()-1;i>=0;i--){
        cout<<res1[i]<<" ";
    }
    cout<<last<<" ";
    cout << endl;
}