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

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++)
    {
        ll P, L;
        cin >> P >> L;

        cout << "Case " << tc << ":";

        ll n = P - L;

        vector<ll> ans;

        for(ll i = 1; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                ll x = i;
                ll y = n / i;

                if(x > L)
                    ans.push_back(x);

                if(y != x && y > L)
                    ans.push_back(y);
            }
        }

        sort(ans.begin(), ans.end());

        if(ans.empty())
        {
            cout << " impossible";
        }
        else
        {
            for(ll x : ans)
                cout << " " << x;
        }

        cout << nl;
    }

    return 0;
}