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

    for(int tc = 1; tc <= t; tc++)
    {
        ll n, digit;
        cin >> n >> digit;

        ll rem = 0;
        ll ans = 0;

        while(true)
        {
            rem = (rem * 10 + digit) % n;
            ans++;

            if(rem == 0)
                break;
        }

        cout << "Case " << tc << ": " << ans << nl;
    }

    return 0;
}