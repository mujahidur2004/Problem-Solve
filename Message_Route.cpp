#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e5+10;
bitset<N> visited;
vector<vector<int>>v(N);
vector<int>ancestor(N);

void bfs(int root,int target){
    queue<int>st;
    st.push(root);
    ancestor[root]=root;
    visited[root]=1;
    while(!st.empty()){
        root = st.front();
        //cout<<root+1<<" ";
        st.pop();
        for(auto u : v[root]){
            if(visited[u] ==0 ){
                visited[u]=1;
                ancestor[u]=root;
                st.push(u);
            }
        }
    }
}

int main() {
    

    int n,m;
    cin>>n>>m;

    for(int i = 0;i<m;i++) {
        int x,y;
        cin>>x>>y;
        x--,y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
   
    bfs(0,n-1);
    
     if(visited[n-1]){
        int target=n-1;
        vector<int>res;
        while(ancestor[target]!=target){
            res.push_back(target+1);
            target=ancestor[target];

        }
        res.push_back(1);
        cout<<res.size()<<endl;
        for(int i=res.size()-1;i>=0;i--){
            cout<<res[i]<<" ";
        }
        cout<<endl;

     }
     else{
        cout<<"IMPOSSIBLE\n";
     }
    return 0;
}