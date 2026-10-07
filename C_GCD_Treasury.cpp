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

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
 
        vector<int> a(n);
 
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> prime;
 
        int temp = x;
 
        for(int p = 2; p * p <= temp; p++)
        {
            if(temp % p == 0)
            {
                prime.push_back(p);
 
                while(temp % p == 0)
                {
                    temp /= p;
                }
            }
        }
 
        if(temp > 1)
        {
            prime.push_back(temp);
        }
 
        ll ans = 0;
        for(int p : prime)
        {
            ll sum = 0;
 
            for(int i = 0; i < n; i++)
            {
                if(a[i] % p == 0)
                {
                    sum += a[i];
                }
            }
 
            ans = max(ans, sum);
        }
 
        cout << ans << endl;

        
    }

    return 0;
}