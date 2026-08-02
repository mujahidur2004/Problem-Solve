#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> h(n);
        for (auto& it : h)
            cin >> it;
        for (int i = 0; i < n; i++) {
            vector<ll> ans(n, 0);
            for (int j = i; (j + 1) % n != i; j = (j + 1) % n) {
                // i and i+1 er middleman is h[i]
                ans[(j + 1) % n] = max(ans[j], h[j]);
            }
            for (int j = i; (j - 1 + n) % n != i; j = (j - 1 + n) % n) {
                // i and i-1 er middleman is h[i-1]
                ans[(j - 1 + n) % n] = min(max(ans[j], h[(j - 1 + n) % n]), ans[(j - 1 + n) % n]);
            }
            cout << accumulate(ans.begin(), ans.end(), 0ll) << " \n"[i + 1 == n];
        }
    }
    return 0;
}