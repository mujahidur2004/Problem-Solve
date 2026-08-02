/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> b(n + 1);
        vector<int> ans(n + 1);

        b[0] = 0;

        for (int i = 1; i <= n; i++)
            cin >> b[i];

        int nxt = 1;

        for (int i = 1; i <= n; i++) {
            ll d = b[i] - b[i - 1];

            if (d == i) {
                ans[i] = nxt++;
            } else {
                ans[i] = ans[i - d];
            }
        }

        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";

        cout << nl;
    }

    return 0;
}