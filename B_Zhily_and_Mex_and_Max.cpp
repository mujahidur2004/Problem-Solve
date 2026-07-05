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
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 0;

        int mex = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mex)
            {
                mex++;
            }

            ll mx = a[n - 1];

            if (mx >= mex)
            {
                ans = 1LL * n * mx + 1LL * n * mex - 1LL * mex * (mex + 1) / 2;
            }
            else
            {
                ans = 1LL * n * mx + 1LL * mx * (mx - 1) / 2 + 1LL * (n - mx) * mex;
            }

            
        }
        cout << ans << nl;
    }
    return 0;
}