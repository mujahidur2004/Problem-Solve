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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int count = 0, max_blank = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                count++;
                max_blank = max(max_blank, count);
            } else {
                count = 0;
            }
        }

        cout << max_blank << "\n";
    }
    return 0;
}
