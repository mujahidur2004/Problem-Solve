
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

        string s;
        cin >> s;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cnt++;
        }

        int ans = cnt * (n - 1) + (n - cnt);

        cout << ans << nl;
    }

    return 0;
}
