#include <bits/stdc++.h>
using namespace std;

vector<long long> path;
bool found=false;

void dfs(long long a,long long b){
    if(a>b || found) return;

    path.push_back(a);

    if(a==b){
        found=true;
        return;
    }

    dfs(a*2,b);
    dfs(a*10+1,b);

    if(!found) path.pop_back();
}

int main(){
    long long a,b;
    cin>>a>>b;

    dfs(a,b);

    if(found){
        cout<<"YES\n";
        cout<<path.size()<<"\n";

        for(auto x:path)
            cout<<x<<" ";
    }
    else{
        cout<<"NO\n";
    }
}