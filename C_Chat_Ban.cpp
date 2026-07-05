#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll k, x; cin >> k >> x;
        ll mx = 2 * k - 1;
        ll all = (k * (k + 1) / 2) + ((k - 1) * (k ) / 2);
        if (x >= all) {
            cout << mx << endl;
            continue;
        }
        ll first = 1LL, last = mx, ans = 0;
        while (first <= last) {
            ll m = (first + last) / 2;
            ll xm = 0LL;
            if (m > k) {
                ll temp = ((mx- m) * ((mx - m) + 1) / 2);
                xm = (all - temp);
            } else {
                xm = (m * (m + 1) / 2);
            }
            if (xm < x) {
                first = m + 1;
            } else {
                ans = m;
                last = m - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}