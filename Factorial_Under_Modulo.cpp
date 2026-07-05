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

    ll t;
    cin >> t;
    ll ans =1;
    for(int i=1;i<=t;i++)
        ans=(ans*i)%998244353;
        

        
    
    cout<<ans<<nl;
    return 0;
}