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
        int n, m;
        cin >> n >> m;

        vector<int> freq(m + 2, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        // suffix[x] = number of carrots with length >= x
        vector<int> suffix(m + 3, 0);

        for (int x = m; x >= 1; x--)
        {
            suffix[x] = suffix[x + 1] + freq[x];
        }

        int ans = 0;

        for (int x = 1; x <= m; x++)
        {
            // Every carrot >= x can give us one carrot of length x
            int cur = suffix[x];

            // A carrot of length 2*x gives TWO carrots of length x,
            // so we get one additional carrot.
            if (2 * x <= m)
            {
                cur += freq[2 * x];
            }

            ans = max(ans, cur);
        }

        cout << ans << nl;
    }

    return 0;
}