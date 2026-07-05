#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5+10;
bitset<N> visited;
vector<vector<int>>v(N);


void dfs(int root){
    //cout<<root+1<<" ";
    for(auto u : v[root]){
        if(visited[u]==0){
            visited[u]=1;
            cout<<root+1<<" "<<u+1<<endl;
            dfs(u);
        }
    }
    
}

int main() {
    
    int n,m;
    cin>>n>>m;

    for(int i = 1;i<=m;i++) {
        int x,y;
        cin>>x>>y;
        x--,y--;
        v[x].push_back(y);
        v[y].push_back(x);
       
    }
    int root = 0;
    
    visited[root]=1;
    dfs(root);
    
    cout<<endl;
    
    return 0;
}