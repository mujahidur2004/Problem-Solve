#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        // SPF
        vector<int> spf(n + 1);

        for (int i = 1; i <= n; i++)
            spf[i] = i;

        for (int i = 2; i * i <= n; i++) {
            if (spf[i] == i) {
                for (int j = i * i; j <= n; j += i) {
                    if (spf[j] == j)
                        spf[j] = i;
                }
            }
        }

        // dp[x] = minimum operations needed
        // to make all numbers <= k
        vector<long long> dp(n + 1, 0);

        for (int x = k + 1; x <= n; x++) {

            int temp = x;

            dp[x] = LLONG_MAX;

            while (temp > 1) {

                int p = spf[temp];

                // p is a prime divisor of x
                int y = x / p;

                dp[x] = min(
                    dp[x],
                    1LL + 1LL * p * dp[y]
                );

                // remove all occurrences of p
                while (temp % p == 0)
                    temp /= p;
            }
        }

        long long ans = 0;

        for (int x : a) {
            ans += dp[x];
        }

        cout << ans << '\n';
    }

    return 0;
}