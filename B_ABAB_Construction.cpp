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
    string s;
    cin >> s;

    bool ok = true;

    if (n % 2 != 0) {
        if (s[0] == 'b') {
            ok = false;
        }

        for (int i = 1; i + 1 < n; i += 2) {
            if (s[i] != '?' && s[i+1] != '?' && s[i] == s[i+1]) {
                ok = false;
                break;
            }
        }
    } 
    else {
        for (int i = 0; i + 1 < n; i += 2) {
            if (s[i] != '?' && s[i+1] != '?' && s[i] == s[i+1]) {
                ok = false;
                break;
            }
        }
    }

    if (ok) cout << "YES" << nl;
    else cout << "NO" << nl;
}
    return 0;
}