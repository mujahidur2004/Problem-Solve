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
vector<bool> vis(N);

vector<int> graph[N];
void dfs(int root){
    for(auto ele:graph[root]){
        if(vis[ele])continue;
        vis[ele]=1;
        dfs(ele);
    }
}
string node=" ABCD";
int findvalue(char a){
    for(int i=1;i<=4;i++){
        if(node[i]==a)
            return i;
    }
}

int main() {
    fast_io;
    int t=4;
    

    while(t--){
        string s,tems;
        for(int i=0;i<3;i++){
            cin>>tems;
            s+=tems;
        }
        
        if(s[1]=='<'){
            graph[findvalue(s[3])].push_back(findvalue(s[0]));
        }
        else{
            graph[findvalue(s[0])].push_back(findvalue(s[3]));
        }

    }
    cin >>t;
    while(t--){
        char a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"NO\n";
            continue;
        }
        vis[findvalue(a)]=1;
        dfs(findvalue(a));
        if(vis[findvalue(b)]){
            cout<<"YES"<<nl;
        }    
        else cout<<"NO"<<nl;
       for(int i=1;i<5;i++){
        vis[i]=0;
       }
    }




    
    return 0;
}