#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 5e4+10;
bitset<N> visited;
vector<vector<int>>v(N+1);
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
    

    int n, m,s,e;
    cin>>n>>m>>s>>e;

    while(m--){
        int v1,v2;
        cin>>v1>>v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }
   
    bfs(s,e);
    
     if(visited[e]){
        int target=e;
        vector<int>res;
        while(ancestor[target]!=target){
            res.push_back(target);
            target=ancestor[target];

        }
        res.push_back(s);
        cout<<res.size()-1<<endl;
        for(int i=res.size()-1;i>=0;i--){
            cout<<res[i]<<" ";
        }
        cout<<endl;

     }
     else{
        cout<<"-1\n";
     }
    return 0;
}