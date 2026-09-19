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

        vector<ll> a(n+1), b(n+1), f(n+1);

        for (int i = 0; i < n; i++) {
            cin >> a[i+1];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i+1];
        }

        ll suma = 0, sumb = 0;
        bool ok = true;

        for (int i = 1; i <= n; i++) {
            suma += a[i];
            sumb += b[i];

            if (suma > sumb) {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}