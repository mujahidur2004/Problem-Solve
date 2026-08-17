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
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        int cntZ = 0, cntO = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cntZ++;
        }

        cntO = n - cntZ;

        ll res1 = 0, res2 = 0;

        if (b >= 0)
        {
            res1 = 1LL * n * (a + b);
        }
        else
        {
            int zeroBlock = 0;
            int oneBlock = 0;

            for (int i = 0; i < n; i++)
            {
                if (i == 0 || s[i] != s[i - 1])
                {
                    if (s[i] == '0')
                        zeroBlock++;
                    else
                        oneBlock++;
                }
            }

            int cnt = min(zeroBlock, oneBlock) + 1;

            res1 = 1LL * n * a + 1LL * cnt * b;
        }

        cout << res1 << nl;
    }

    return 0;
}
