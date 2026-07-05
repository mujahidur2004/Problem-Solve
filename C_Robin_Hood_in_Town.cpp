#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool can(ll x, vector<ll>& a, ll S, int n) {
    ll unhappy = 0;
    for (ll v : a) {
        if (2LL * n * v < S + x)
            unhappy++;
    }
    return unhappy > n / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (n <= 2) {
            cout << -1 << "\n";
            continue;
        }

        ll S = accumulate(a.begin(), a.end(), 0LL);

        ll low = 0, high = 1e18, ans = -1;

        while (low <= high) {
            ll mid = (low + (high-low) / 2);
            if (can(mid, a, S, n)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
