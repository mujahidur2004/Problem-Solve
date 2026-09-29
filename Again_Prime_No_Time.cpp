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

ll cnt(ll n, ll p)
{
    ll ans = 0;

    for(ll i = 1; i <= n; i++)
    {
        ll x = i;

        while(x % p == 0)
        {
            ans++;
            x /= p;
        }
    }

    return ans;
}

int main()
{
    fast_io;

    int t;
    cin >> t;

    for(int tc = 1; tc <= t; tc++)
    {
        ll m, n;
        cin >> m >> n;

        ll x = m;
        ll ans = LLONG_MAX;

        for(ll p = 2; p * p <= x; p++)
        {
            if(x % p == 0)
            {
                ll power = 0;

                while(x % p == 0)
                {
                    x /= p;
                    power++;
                }

                ll have = cnt(n, p);

                ans = min(ans, have / power);
            }
        }

        if(x > 1)
        {
            ll have = cnt(n, x);
            ans = min(ans, have);
        }

        cout << "Case " << tc << ":" << nl;

        if(ans == 0)
            cout << "Impossible to divide" << nl;
        else
            cout << ans << nl;
    }

    return 0;
}