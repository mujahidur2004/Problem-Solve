#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        std::vector<int> v(n), v1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        map<int, vector<int>>mv;
        int mx = v[0];
        mv[mx].push_back(v[0]);
        for (int i = 1; i < n; i++) {
            if (v[i] < mx) {
                mv[mx].push_back(v[i]);
            } else {
                mx = v[i];
                mv[mx].push_back(v[i]);
            }
        }
        auto it = mv.rbegin();
        while (it != mv.rend()) {
            vector<int>vv = it->second;
            for (auto x : vv) {
                cout << x << " ";
            }
            it++;
        }
        cout << endl;
    }
    return 0;
}