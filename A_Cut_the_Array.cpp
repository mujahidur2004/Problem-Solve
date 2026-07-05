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

        vector<ll> a(n + 1), pre(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pre[i] = pre[i - 1] + a[i];
        }

        bool found = false;
        int res1 = 0, res2 = 0;

        for (int i = 1; i < n && !found; i++) {
            int s1 = pre[i] % 3;

            for (int j = i + 1; j < n && !found; j++) {
                int s2 = (pre[j] - pre[i]) % 3;
                int s3 = (pre[n] - pre[j]) % 3;

                
                s2 = (s2 + 3) % 3;
                s3 = (s3 + 3) % 3;

              
                if (s1 == s2 && s2 == s3) {
                    res1 = i;
                    res2 = j;
                    found = true;
                }
                
                else if (s1 != s2 && s2 != s3 && s1 != s3) {
                    res1 = i;
                    res2 = j;
                    found = true;
                }
            }
        }

        if (found)
            cout << res1 << " " << res2 << nl;
        else
            cout << "0 0" << nl;
    }

    return 0;
}
