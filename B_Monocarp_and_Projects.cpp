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
const long long N = 1000000;

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int ans = 0;
        while (k > 0 && y >= x * 2)
        {
            ans += (y % x);
            y++, x++, k--;
        }
        if (k > 0)
            ans += k * (y - x);

        cout << ans << "\n";
    }

    return 0;
}