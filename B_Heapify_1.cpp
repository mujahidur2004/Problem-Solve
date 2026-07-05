#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

int find_root(int x) {
    while (x % 2 == 0) {
        x /= 2;
    }
    return x;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n+1), pos(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }

        bool ok = true;

        for (int i = 1; i <= n; i++) {
            if (find_root(pos[i]) != find_root(i)) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << nl;
    }

    return 0;
}
