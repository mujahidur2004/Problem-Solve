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

vector<ll> v;

void gen(string s, int len, int a, int b)
{
    if (!s.empty())
        v.push_back(stoll(s));

    if ((int)s.size() == len)
        return;

    gen(s + char(a + '0'), len, a, b);
    gen(s + char(b + '0'), len, a, b);
}

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        ll num;
        cin >> num;

        int n;
        cin >> n;

        int a, b;
        cin >> a >> b;

        v.clear();

        gen("", 18, a, b);

        ll ans = LLONG_MAX;

        for (ll x : v)
        {
            ans = min(ans, abs(num - x));
        }

        cout << ans << nl;
    }

    return 0;
}