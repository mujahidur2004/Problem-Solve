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

        string a, b;
        cin >> a >> b;

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            if (b[i] == '1' && a[i] == '0')
            {
                res++;
            }
            else if (b[i] == '1' && i - 1 >= 0 && a[i - 1] == '1')
            {
                res++;
                a[i - 1] = '0';
            }
            else if (b[i] == '1' && i + 1 < n && a[i + 1] == '1')
            {
                res++;
                a[i + 1] = '0';
            }
        }

        cout << res << nl;
    }

    return 0;
}