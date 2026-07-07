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
const int N=100+7;
bool vis[N];

vector<int> graph[N];
void dfs(int root){
    for(auto ele:graph[root]){
        if(vis[ele])continue;
        vis[ele]=1;
        dfs(ele);
    }
}

int main() {
    fast_io;
    int n ,s;
    cin>>n>>s;
   
    int ele;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           cin>>ele;
           if(ele){
            graph[i].push_back(j);
            graph[j].push_back(i);
           }
        }
    }
    vis[s]=1;
    dfs(s);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(vis[i])
            cnt++;
    }
    cout<<cnt<<nl;




    
    return 0;
}