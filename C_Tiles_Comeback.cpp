#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {

        int n, k, first = 1, last = 0, ind = -1;
        cin >> n >> k;
        vector<int> a(n);

        cin >> a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (a[i] == a[0]) first++;
            if (first == k && ind == -1) ind = i;
        }

        if (k == 1) {
            cout << "YES\n";
            continue;
        }

        if (first < k) {
            cout << "NO\n";
            continue;
        }

        if (a[0] == a[n - 1]) {
            cout << "YES\n";
            continue;
        }

        for (int i = ind + 1; i < n; i++) {
            if (a[i] == a[n - 1]) last++;
        }

        if (last >= k && ind < n - last) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
