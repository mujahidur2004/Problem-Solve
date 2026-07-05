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

    int t;
    cin >> t;
    while (t--) {
       ll n,x,y,z;
       cin>>n>>x>>y>>z;
       ll ans=(n+x+y-1)/(x+y);
       if(ans>z){
        ans=min((n+10*y*z+x+10*y-1)/(x+10*y),ans);
       }
        cout<<ans<<nl;
    }
    return 0;
}