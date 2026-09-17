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
        int n, x, y;
        cin >> n >> x >> y;

        map<int, int> mp;

        for (int i = 1; i <= n; i++)
        {
            int ele;
            cin >> ele;
            mp[ele] = i;
        }

        int g = gcd(x, y);
        bool f = 1;

        for (int i = 1; i <= n; i++)
        {
            if (mp[i] % g != i % g)
            {
                f = 0;
                break;
            }
        }

        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}