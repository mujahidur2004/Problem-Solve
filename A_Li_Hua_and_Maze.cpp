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
        int n, m;
        cin >> n >> m;

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int res1 = 0, res2 = 0;

        
        if (x1 > 1)
            res1++;

        if (x1 < n)
            res1++;

        if (y1 > 1)
            res1++;

        if (y1 < m)
            res1++;

        
        if (x2 > 1)
            res2++;

        if (x2 < n)
            res2++;

        if (y2 > 1)
            res2++;

        if (y2 < m)
            res2++;

        cout << min(res1, res2) << nl;
    }

    return 0;
}