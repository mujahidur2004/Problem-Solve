/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#define ll long long
#define nl '\n'

int main()
{
    fast_io;

    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int t;
    cin >> t;

    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        int mn = lower_bound(a.begin(), a.end(), l) - a.begin();
        int mx = upper_bound(a.begin(), a.end(), r) - a.begin();

        cout << mx - mn << " ";
    }

    return 0;
}