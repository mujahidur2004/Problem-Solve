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
        string s;
        cin >> s;

        int n = s.size(), f1 = 0, f2 = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] != s[i - 1] && s[i] != s[i + 1])
                f1 = 1;
            else if (s[i] == s[i - 1] && s[i] == s[i + 1])
                f2 = 1;
        }

        cout << (1 + f1 + f2) << nl;
    }

    return 0;
}