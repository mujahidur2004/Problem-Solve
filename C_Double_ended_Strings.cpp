#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();

        int best = 0;

        // find longest common substring
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int k = 0;
                while (i + k < n && j + k < m && a[i + k] == b[j + k])
                    k++;
                best = max(best, k);
            }
        }

        int ans = (n - best) + (m - best);
        cout << ans << "\n";
    }
}
