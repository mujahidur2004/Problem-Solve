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

    cin >> n >> m >> k;

    vector<ll> a(n), b(m);

    for (auto &x : a)
        cin >> x;

    for (auto &x : b)
        cin >> x;

    sort(b.begin(), b.end());

    multiset<ll> applicants(a.begin(), a.end());

    int ans = 0;

    for (ll apartment : b)
    {
        
        auto it = applicants.lower_bound(apartment - k);

        
        if (it == applicants.end())
            continue;

        
        if (*it > apartment + k)
            continue;

     
        ans++;
        applicants.erase(it);
    }

    cout << ans << nl;

    return 0;
}