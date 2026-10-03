
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

int main()
{
    fast_io;

    int c;
    cin >> c;

    while (c--)
    {
        int d, n;
        cin >> d >> n;

        vector<ll> cnt(d, 0);

        ll sum = 0, ans = 0;
        cnt[0] = 1;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            sum = (sum + x) % d;

            ans += cnt[sum];
            cnt[sum]++;
        }

        cout << ans << nl;
    }

    return 0;
}