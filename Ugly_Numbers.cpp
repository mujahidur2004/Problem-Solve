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

int main()
{
    fast_io;

    vector<ll> ugly(1500);

    ugly[0] = 1;

    int i2 = 0, i3 = 0, i5 = 0;

    for (int i = 1; i < 1500; i++)
    {
        ll x = min({ugly[i2] * 2,
                    ugly[i3] * 3,
                    ugly[i5] * 5});

        ugly[i] = x;

        if (x == ugly[i2] * 2)
            i2++;

        if (x == ugly[i3] * 3)
            i3++;

        if (x == ugly[i5] * 5)
            i5++;
    }

    cout << "The 1500'th ugly number is " << ugly[1499] << "." << nl;

    return 0;
}