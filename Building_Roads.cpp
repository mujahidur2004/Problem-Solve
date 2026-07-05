#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+10;
bitset<N> visited;
vector<vector<int>> v(N);
vector<int> res;

void dfs(int root){
    visited[root] = 1;

    for(auto u : v[root]){
        if(!visited[u]){
            dfs(u);
        }
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            res.push_back(i);
            dfs(i);
        }
    }

    cout << res.size()-1 << endl;
    for(int i=0;i<res.size()-1;i++){
        cout<<res[i]<<" "<<res[i+1]<<endl;
    }
}