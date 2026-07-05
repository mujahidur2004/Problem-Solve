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
        bool c=0,b=0;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
            if(a[i]==1)c=1;
            if(a[i]==67)b=1;
        }
        if(b)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

        
    }
    return 0;
}