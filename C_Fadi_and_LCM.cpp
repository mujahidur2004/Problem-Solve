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

    ll x;
    cin >> x;

    ll ans1 = 1, ans2 = x;

    for(ll i = 2; i * i <= x; i++)
    {
        if(x % i == 0)
        
        {
            ll lc= (i * x/i) /gcd(i, x / i);
            if(x / i < ans2 && lc == x)
            {
                ans1 = i;
                ans2 = x / i;
            }
        }
    }

    cout << ans1 << " " << ans2 << nl;

    return 0;
}