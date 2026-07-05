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

    vector<ll> a(n), sum(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + a[i - 1];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {

        int l = i + 1;
        int r = n;

        while (l <= r) {
            int mid = (l + r) / 2;

            ll cur = sum[mid] - sum[i];

            if (cur == x) {
                cnt++;
                break;
            }
            else if (cur < x) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
    }

    cout << cnt << nl;

    return 0;
}