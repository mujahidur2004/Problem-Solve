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
        int r, s, p;
        cin >> r >> s >> p;
        int len = r + s + p;

        if (s >= p)
        {
            for (int i = 0; i < len; i++)
            {
                cout << "R";
            }
        }
        else if (p >= r)
        {
            for (int i = 0; i < len; i++)
            {
                cout << "S";
            }
        }
        else
        {
            for (int i = 0; i < len; i++)
            {
                cout << "P";
            }
        }
        cout << nl;
    }

    return 0;
}