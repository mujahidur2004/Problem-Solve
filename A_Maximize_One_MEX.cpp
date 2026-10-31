/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        if (k == 1 || a == b)
        {
            cout << -1 << nl;
            continue;
        }
        int mx = -1, ans1, ans2;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                b = a;
                swap(b[i], b[j]);
                int m = 0;
                vector<int> pos;
                vector<bool> vis(n + 1, false);

                for (int p = 0; p < n; p++)
                {
                    vis[b[p]] = true;

                    while (vis[m])
                        m++;

                    pos.push_back(m);
                }
                sort(pos.begin(), pos.end());
                if (mx <= pos[n - k])
                {
                    ans1 = i + 1, ans2 = j + 1;
                    mx = pos[n - k];
                }
            }
        }
        cout << ans1 << " " << ans2 << nl;
    }

    return 0;
}