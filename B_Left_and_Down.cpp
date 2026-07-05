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
        ll a, b, k; cin >> a >> b >> k;
        ll g = __gcd(a, b);
        a /= g; b /= g;
        if (a <= k && b <= k) cout << 1 << nl;
        else cout << 2 << nl;

        
    }
    return 0;
}