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
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll a1 = a[0], an = a[n-1];

        
        if (a1 != -1 && an != -1) {
            // do nothing
        }
        if (a1 == -1 && an != -1) {
            a1 = an;
        }
        else if (a1 != -1 && an == -1) {
            an = a1;
        }
        else { // both -1
            a1 = an = 0;
        }

        a[0] = a1;
        a[n-1] = an;

        // ---- Fill middle with 0 ----
        for (int i = 1; i < n-1; i++) {
            if (a[i] == -1) a[i] = 0;
        }

        // ---- Output minimum |a[n-1] - a[0]| ----
        cout << llabs(a[n-1] - a[0]) << "\n";

        for (auto x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
