#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

signed main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ans = accumulate(a.begin(), a.end(), 0LL);

        map<int,int> mp1, mp2;  // তোমার মতোই রাখা হয়েছে

        // প্রতিটি bit-এর জন্য window চেক
        for (int i = 0; i < 31; i++) {

            int len = (1LL << i);
            if (len > n) break;

            mp1[i] = 0;    // window এ bit=1
            mp2[i] = 0;    // window এ bit=0

            // প্রথম window (0..len-1)
            for (int j = 0; j < len; j++) {
                if (a[j] & len) mp1[i]++;
                else mp2[i]++;
            }

            long long best = (mp2[i] - mp1[i]) * len;

            for (int j = len; j < n; j++) {

                if (a[j] & len) mp1[i]++;
                else mp2[i]++;

                if (a[j-len] & len) mp1[i]--;
                else mp2[i]--;

                long long cur = (mp2[i] - mp1[i]) * len;
                best = min(best, cur);
            }

            if (best < 0) ans += best;
        }

        cout << ans << "\n";
    }

    return 0;
}
