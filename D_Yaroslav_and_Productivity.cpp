#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<int> cnt(n + 2, 0);

        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        for (int i = n - 1; i >= 1; i--)
            cnt[i] += cnt[i + 1];

        ll ans = 0;

        for (int i = 1; i <= n; i++) {
            if (cnt[i] & 1)
                ans += (-1 * a[i]);
            else
                ans += a[i];
        }

        cout << ans << '\n';
    }

    return 0;
}