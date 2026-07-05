#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

int main() {
    fast_io;

    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll best = a[0], sum = a[0];

    for (int i = 1; i < n; i++) {
        sum = max(a[i], sum + a[i]);
        best = max(best, sum);
    }

    cout << best << nl;

    return 0;
}