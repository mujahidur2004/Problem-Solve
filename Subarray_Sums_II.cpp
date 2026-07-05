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

    int n;
    ll x;
    cin >> n >> x;

    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<ll, ll> mp;

    ll pref = 0;
    ll cnt = 0;

    mp[0] = 1;

    for (int i = 0; i < n; i++) {
        pref += a[i];

        cnt += mp[pref - x];

        mp[pref]++;
    }

    cout << cnt << nl;

    return 0;
}