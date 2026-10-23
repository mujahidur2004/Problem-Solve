
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
        vector<int> cnt(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        int ans = -1;
        int mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (cnt[a[i]] == 1 && a[i] < mn)
            {
                mn = a[i];
                ans = i + 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
