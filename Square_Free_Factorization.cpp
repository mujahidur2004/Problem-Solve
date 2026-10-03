
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

        int ans = 0;

        for (int i = 2; i * i <= n; i++)
        {
            int cnt = 0;

            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }

            ans = max(ans, cnt);
        }

        if (n > 1)
            ans = max(ans, 1);

        cout << ans << nl;
    }

    return 0;
}