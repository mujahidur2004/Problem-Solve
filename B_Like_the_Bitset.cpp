#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        
        int cnt = 0;
        bool bad = false;
        for (char c : s) {
            if (c == '1') {
                cnt++;
                if (cnt >= k) {
                    bad = true;
                    break;
                }
            } else {
                cnt = 0;
            }
        }

        if (bad) {
            cout << "NO\n";
            continue;
        }

        int small = 1, large = n;
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
               cout<<small++<<" ";
            } else {
                cout<<large--<<" ";
            }
        }

        
        
        cout << endl;
    }
    return 0;
}
