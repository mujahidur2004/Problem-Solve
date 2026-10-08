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
        int n;
        cin >> n;

        vector<ll> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        map<ll, int> mp;
        ll ans = 0;

        
        for (int i = 1; i <= n - 4; i++)
        {
            ll sum = a[i] + a[i + 2] - a[i + 4];
            mp[sum]++;
            //cout<<i<<" "<<sum<<nl;
        }

       
        for (int i = 1; i <= n - 4; i++)
        {
            ll sum = a[i] + a[i + 2] - a[i + 4];

            ll curs = mp[sum];

           
            if (i + 2 <= n - 4)
            {
                ll sum1 = a[i + 2] + a[i + 4] - a[i + 6];

                if (sum1 == sum)
                    curs--;
            }

            
            if (i + 4 <= n - 4)
            {
                ll sum1 = a[i + 4] + a[i + 6] - a[i + 8];

                if (sum1 == sum)
                    curs--;
            }

            
            curs--;

            ans += curs;

            
            mp[sum]--;
        }

        cout << ans << nl;
    }

    return 0;
}