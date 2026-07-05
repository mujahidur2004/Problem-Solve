#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        ll total_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_sum += a[i];
        }

        ll maxBeauty = 0;
        for (ll ele : a)
            maxBeauty += (ele + x - 1) / x;

        ll minBeauty = (total_sum + x - 1) / x; 

        cout << minBeauty << " " << maxBeauty << "\n";
    }
    return 0;
}
