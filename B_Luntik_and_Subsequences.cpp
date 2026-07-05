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
        int cnt1=0,cnt0=0;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
            if(a[i]==1)cnt1++;
            else if(a[i]==0)cnt0++;
        }
        ll ans=pow(2,cnt0)*cnt1;
        cout<<ans<<nl;
        
    }
    return 0;
}