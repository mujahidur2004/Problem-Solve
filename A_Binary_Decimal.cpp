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
        ll n;
        cin >> n;

        int ans = 0;

        while (n > 0) {
            int digit = n % 10;

            ans = max(ans, digit);

            n /= 10;
        }

        cout << ans << nl;
    }

    return 0;
}