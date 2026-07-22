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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> pref(n + 1, 0);

    
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1];
            if (s[i - 1] == 'W')
                pref[i]++;
        }

        int ans = INT_MAX;

        for (int i = 0; i + k <= n; i++)
        {
            ans = min(ans, pref[i + k] - pref[i]);
        }

        cout << ans << nl;
    }

    return 0;
}