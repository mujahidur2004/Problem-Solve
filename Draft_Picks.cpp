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
        int n, k;
        cin >> n >> k;

        vector<ll> a(n + 1, 0);

        int f = 0, i = 1;

        while (k)
        {
            a[i] += k;
            k--;

            if (f == 0)
            {
                if (i == n)
                    f = 1;
                else
                    i++;
            }
            else
            {
                if (i == 1)
                    f = 0;
                else
                    i--;
            }
        }

        ll res = 0;
        for (int j = 1; j <= n; j++)
        {
            res = max(res, a[j]);
        }

        cout << res << nl;
    }
    return 0;
}