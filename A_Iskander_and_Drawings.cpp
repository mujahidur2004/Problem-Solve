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
        string s;
        cin >> s;
        int cnt = 0, res = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#')
            {
                cnt++;
                res = max(res, cnt);
            }
            else
            {
                cnt = 0;
            }
        }

        cout << (res + 1) / 2 << nl;
    }

    return 0;
}