#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 2e5+10;
bitset<N> visited;
vector<int> v[N];
vector<int>Sz(N);

int dfs(int root){
    //cout<<root+1<<" ";
    for(auto u : v[root]){
        if(visited[u]==0){
            visited[u]=1;
            Sz[root]+=dfs(u);
        }
    }
    return Sz[root]+1;
}

int main() {
    
    int n;
    cin>>n;

    for(int i = 1;i<n;i++) {
        int x;
        cin>>x;
        x--;
        v[x].push_back(i);
       
    }
    int root = 0;
    
    visited[root]=1;
    int x = dfs(root);
    for(int i=0;i<n;i++){
        cout<<Sz[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}