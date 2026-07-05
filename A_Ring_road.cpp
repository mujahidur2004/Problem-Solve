/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd
const int N=100;
vector<pair<int,int>> graph[N+10];
ll res=0;
bool visited[N+10];
void dfs(int root,int parent){
    
    
    for(auto ele:graph[root]){
        if(!visited[ele.first] && ele.first!=parent){
            visited[ele.first]=1;
            
           if(ele.second<0)res+=(-1*ele.second);
            dfs(ele.first,root);


        }

    }

}

int main() {
    fast_io;

  
        int n;
        cin >> n;
        
        int m=n;
        ll total=0;
        while(m--){
            int v1,v2,value;
            cin>>v1>>v2>>value;
            graph[v1].push_back({v2,value});
            //if(v2!=1){
                graph[v2].push_back({v1,(-1*value)});
            //}
            
            total+=value;
        }
        graph[1].pop_back();
        //visited[1]=1;
        dfs(1,1);
       // cout<<res<<" "<<total-res<<endl;
        cout<<min(res,total-res)<<nl;
        

        

        
    
    return 0;
}