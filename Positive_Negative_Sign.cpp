
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

    for (int tc = 1; tc <= t; tc++)
    {
        ll n, m;
        cin >> n >> m;

        ll ans = (n / 2) * m;

        cout << "Case " << tc << ": " << ans << nl;
    }

    return 0;
}