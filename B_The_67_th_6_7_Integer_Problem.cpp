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
        int n = 7;
        vector<ll> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll sum = 0;

        
        for (int i = 0; i < n - 1; i++) {
            sum += (-a[i]);
        }

        
        sum += a[n - 1];

        cout << sum << nl;
    }

    return 0;
}