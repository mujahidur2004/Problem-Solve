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
void Solve()
{
    ll p, q;
    cin >> p >> q;
    ll mxN = sqrt(p + 2 * q) + 5;
    for (int n = 1; n <= mxN; n++) {
        
        if ((p + 2 * q - n) % (2 * n + 1))
            continue;
        int m = (p + 2 * q - n) / (2 * n + 1);
        if (n > m)
            continue;
        int doubleUsable = n * (n + 1) + (m - n) * n;
        if (q <= doubleUsable) {
            cout << n << " " << m << '\n';
            return;
        }
    }
    cout << "-1\n";
}


int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        Solve();
        

        
    }
    return 0;
}