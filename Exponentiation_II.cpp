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

const ll M = 1e9 + 7;

ll Binary_Exp(ll b, ll e, ll mod)
{
    ll ans = 1;

    while (e > 0)
    {
        if (e & 1LL)
        {
            ans = (ans * b) % mod;
        }

        b = (b * b) % mod;
        e = e >> 1LL;
    }

    return ans;
}

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        
        ll e = Binary_Exp(b, c, M - 1);

        
        ll ans = Binary_Exp(a, e, M);

        cout << ans << nl;
    }

    return 0;
}