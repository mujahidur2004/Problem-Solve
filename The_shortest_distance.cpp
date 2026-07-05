#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1000+10;
bitset<N> visited;
vector<vector<int>>v(N);
vector<int>ancestor(N);

void bfs(int root){
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
    

    int m,s;
    cin>>m>>s;

    for(int i = 1;i<=m;i++) {
        for(int j=1;j<=m;j++){
            int c;
            cin>>c;
            if(c==1){
                v[i].push_back(j);
        
            }

        }
        
        
        
    }
   
    bfs(s);
    for(int i=1;i<=m;i++){
        if(visited[i]){
        int target=i;
        vector<int>res;
        while(ancestor[target]!=target){
            res.push_back(target+1);
            target=ancestor[target];

        }
        res.push_back(1);
        cout<<res.size()-1<<" ";
        // for(int i=res.size()-1;i>=0;i--){
        //     cout<<res[i]<<" ";
        // }


     }
     else{
        cout<<"-1 ";
     }

    }
    cout<<endl;
     
    return 0;
}