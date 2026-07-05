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
        int n,m;
        cin >> n>>m;
        vector<ll> a(n),b(m);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i< m; i++) {
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long ans = 0;
        int la = 0, ra = n - 1, lb = 0, rb = m - 1;
    
    while (la <= ra) {
        int left = abs(a[la] - b[rb]);
        int right = abs(a[ra] - b[lb]);
        if (left >= right) {
            ans += left;
            la++, rb--;
        } 
        else {
            ans += right;
            ra--, lb++;
        }
    }
        cout<<ans<<nl;
        
    }
    return 0;
}