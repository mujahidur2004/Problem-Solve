#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int prefSum = 0;
    vector<int> lis;

    for (int i = 0; i < n; i++)
    {
        auto ir = lower_bound(lis.begin(), lis.end(), v[i]);

        if (ir == lis.end())
        {
            lis.push_back(v[i]);
        }
        else
        {
            int ind = ir - lis.begin();
            lis[ind] = v[i];
        }

        int len = lis.size();

        prefSum += v[i];

        int ans = prefSum;

        if (lis.back() < len)
            ans += len * k + k * (k - 1) / 2;
        else
            ans += len * k;

        cout << ans << " ";
    }

    cout << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}