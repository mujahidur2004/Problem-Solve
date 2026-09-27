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

long long ck(long long x) {
 
    long long s = 0;
 
    while (x > 0) {
 
        long long d = x % 10;
 
        s += d * d;
 
        x /= 10;
 
    }
 
    return s;
}

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> mp;

        int s, ns;

        for (int i = 0; i < n; i++)
        {
            cin >> s;

           

            for (int j = 0; j < 1000; j++)
            {
                s = ck(s);
            }

            mp[s]++;
        }

        ll ans =0;

        for (auto ele : mp)
        {
            ans+=(ele.second*(ele.second-1)/2);
        }

        

        cout << ans << nl;
    }

    return 0;
}