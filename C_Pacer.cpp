#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int p = 0, q = 0, r = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        int v = a[i] - p;
        if (q == b[i])
            x = 0;
        else
            x = 1;
        if (v % 2 == x)
            ans += v;
        else
            ans += (v - 1);
        p = a[i];
        q = b[i];
    }
    cout << ans + (m - p) << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}