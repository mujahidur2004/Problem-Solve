/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;

    int T;
    cin >> T;
    while (T--) {
        ll a, b, n;
        cin >> a >> b >> n;

        ll f[3] = {a, b, a ^ b};
        cout << f[n % 3] << '\n';
    }

    return 0;
}