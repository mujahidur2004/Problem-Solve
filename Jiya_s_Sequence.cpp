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
        int n;
        cin >> n;
        vector<ll> a(n);
        ll ans=1;
        for (int i = 0; i< n; i++) {
            cin >> a[i];
            ans*=a[i];

        }
        ans%=10;
        if(ans==2 || ans==3 || ans==5)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

        
    }
    return 0;
}