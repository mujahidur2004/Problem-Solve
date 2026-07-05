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

int main() {
    fast_io;

    int n,m,f=1;
    cin>>n>>m;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        
    }
    int x,y;
    cin>>x>>y;
    x--,y--;
   

for(int p = max(0, x-1); p <= min(n-1, x+1); p++){
    for(int q = max(0, y-1); q <= min(m-1, y+1); q++){
        
        if(p == x && q == y) continue;
        
        if(v[p][q] == '.'){
            f = 0;
            break;
        }
    }
    if(f == 0) break;
}
    if(f)cout<<"yes"<<nl;
    else cout<<"no"<<nl;

    return 0;
}