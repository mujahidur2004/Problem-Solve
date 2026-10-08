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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(k), b(k);

        for (ll &x : a)
            cin >> x;

        // Find maximum X such that
        // sum(min(ai, X)) <= n
        ll lo = 0, hi = *max_element(a.begin(), a.end());

        while (lo <= hi)
        {
            ll mid = lo + (hi - lo) / 2;

            ll sum = 0;

            for (ll x : a)
            {
                sum += min(x, mid);

                if (sum > n)
                    break;
            }

            if (sum <= n)
                lo = mid + 1;
            else
                hi = mid - 1;
        }

        ll X = hi;

        // Base distribution
        ll used = 0;

        for (int i = 0; i < k; i++)
        {
            b[i] = min(a[i], X);
            used += b[i];
        }

        // Distribute remaining papers.
        ll rem = n - used;

        for (int i = k - 1; i >= 0 && rem > 0; i--)
        {
            if (b[i] < a[i])
            {
                b[i]++;
                rem--;
            }
        }

        for (int i = 0; i < k; i++)
        {
            cout << b[i] << " ";
        }

        cout << nl;
    }

    return 0;
}
