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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int total_xor = 0;
        for (int x : a) total_xor ^= x;
        for (int x : b) total_xor ^= x;

        if (total_xor == 0) {
            cout << "Tie\n";
            continue;
        }

        int last = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) last = i;   
        }

        if (last % 2 == 0) cout << "Ajisai\n";  
        else cout << "Mai\n";
    }
    return 0;
}
