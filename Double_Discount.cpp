#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> A(n), B(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int mx = max(A[i], A[j]);
                int mn = min(A[i], A[j]);

                int discount = min(mx / 2, 100);

                int cost = mn + (mx - discount);

                if (cost <= k) {
                    ans = max(ans, B[i] + B[j]);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}