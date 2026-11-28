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
        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll sum1 = accumulate(a.begin(), a.end(), 0LL);
        ll sum2 = accumulate(b.begin(), b.end(), 0LL);

        if (sum1 > sum2)
        {
            cout << "Sunny" << nl;
        }
        else
        {
            ll tsum1 = sum1, tsum2 = sum2;
            sum1 = 0, sum2 = 0;
            int ck = 1;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == b[i])
                    continue;
                if (a[i] > b[i] && ck)
                {
                    sum1 += a[i];
                    sum2 += b[i];
                }
                else if (a[i] > b[i] && !ck)
                {
                    sum1 += b[i];
                    sum2 += a[i];
                }
                else
                {
                    if (ck)
                        ck = 0;
                    else
                        ck = 1;
                }
            }
            if (sum1 > sum2)
                cout << "Sunny" << nl;
            else if (sum1 == sum2)
                cout << "Draw" << nl;
            else
            {
                if(tsum1==tsum2)cout << "Draw" << nl;
                else
                cout << "Aubrey" << nl;
            }
        }
    }

    return 0;
}