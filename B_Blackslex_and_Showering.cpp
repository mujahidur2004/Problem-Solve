#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long total = 0;
        for (int i = 0; i + 1 < n; i++) {
            total += abs(a[i] - a[i + 1]);
        }

        long long maxGain = 0;

       
        maxGain = max(maxGain, (long long)abs(a[0] - a[1]));

       
        maxGain = max(maxGain, (long long)abs(a[n - 2] - a[n - 1]));

     
        for (int k = 1; k + 1 < n; k++) {
            long long gain =
                abs(a[k - 1] - a[k]) +
                abs(a[k] - a[k + 1]) -
                abs(a[k - 1] - a[k + 1]);
            maxGain = max(maxGain, gain);
        }

        cout << total - maxGain << "\n";
    }
    return 0;
}
