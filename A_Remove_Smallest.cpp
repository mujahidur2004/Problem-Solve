
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

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        bool ok = true;

        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > 1)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
