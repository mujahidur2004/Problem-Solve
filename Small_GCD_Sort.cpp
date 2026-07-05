#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int,int>> a;  // store (gcd(i, n), i)

        for (int i = 1; i <= n; i++) {
            a.push_back({__gcd(i, n), i});
        }

        // Sort by gcd descending, and by index ascending if equal
        sort(a.begin(), a.end(), [](auto &x, auto &y) {
            if (x.first == y.first) return x.second < y.second;
            return x.first > y.first;
        });

        for (auto &p : a) cout << p.second << " ";
        cout << "\n";
    }
    return 0;
}
