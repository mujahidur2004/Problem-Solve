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
        int n,p;
        cin >> n>>p;
        vector<ll> a(n+1);

        for (int i = 1; i<= n; i++) {
            cin >> a[i];
        }
        ll ans=a[p];
        if(p-2>0){
            ans=min(a[p-1],a[p-2]);
        }
        if(p+2<=n){
            ans=min(a[p+1],a[p+2]);
        }
        cout<<ans<<nl;

        
    }
    return 0;
}