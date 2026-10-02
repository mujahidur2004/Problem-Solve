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
        ll w;
        cin >> w;

        ll m = 1;

        while(w % 2 == 0)
        {
            w /= 2;
            m *= 2;
        }

        cout << "Case " << tc << ": ";

        if(m == 1)
        {
            cout << "Impossible" << nl;
        }
        else
        {
            cout << w << " " << m << nl;
        }
    }

    return 0;
}