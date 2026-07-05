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
#define gcd __gcd

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        
        vector<ll> b = a;
        int f1 = 1;
        for (int i = 1; i < n; i += 2) {
            if (b[i - 1] > b[i]) {
                ll pos = b[i - 1] - b[i];
                b[i - 1] -= pos;
                b[i] += pos;
            }
        }
        for (int i = 1; i < n; i++) {
            if (b[i - 1] > b[i]) f1 = 0;
        }

        
        vector<ll> c = a;
        int f2 = 1;
        for (int i = 2; i < n; i += 2) {
            if (c[i - 1] > c[i]) {
                ll pos = c[i - 1] - c[i];
                c[i - 1] -= pos;
                c[i] += pos;
            }
        }
        for (int i = 1; i < n; i++) {
            if (c[i - 1] > c[i]) f2 = 0;
        }

        if (f1 || f2) cout << "Yes" << nl;
        else cout << "No" << nl;
    }
    return 0;
}