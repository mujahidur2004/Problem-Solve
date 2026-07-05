#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> a(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        string s = "vika";
        int pos = 0;

        for (int col = 0; col < m && pos < 4; col++) {
            for (int row = 0; row < n; row++) {
                if (a[row][col] == s[pos]) {
                    pos++;
                    break;
                }
            }
        }

        cout << (pos == 4 ? "YES\n" : "NO\n");
    }
    return 0;
}
