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

    int n, m;
    ll k;

    cin >> n >> m;

    vector<ll> a(n), b(m);

    for (auto &x : a)
        cin >> x;

    for (auto &x : b)
        cin >> x;

    multiset<ll> applicants(a.begin(), a.end());

    int ans = 0;

    for (ll apartment : b)
    {
        auto it = applicants.upper_bound(apartment);

        if (it == applicants.begin())
        {
            cout << -1 << nl;
        }
        else
        {
            --it;

            cout << *it << nl;

            applicants.erase(it);
        }
    }

    return 0;
}