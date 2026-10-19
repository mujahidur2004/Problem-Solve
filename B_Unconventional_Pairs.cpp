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

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        ll ans = 0;

        for (int i = 0; i < n; i += 2)
        {
            ans = max(ans, a[i + 1] - a[i]);
        }

        cout << ans << nl;
    }

    return 0;
}