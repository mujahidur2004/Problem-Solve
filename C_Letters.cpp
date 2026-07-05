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
 
    ll n,m;
    cin >>n>>m;
    vector<ll>a(n+1),b(m+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]=a[i]+a[i-1];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
    }
    int j=1;
    for(int i=1;i<=n;i++){
        for(;j<=m;j++){
            if(a[i]<b[j]) break;
            else{
                cout<<i<< " "<<b[j]-a[i-1]<<nl;
            }
        }
    }
    return 0;
}