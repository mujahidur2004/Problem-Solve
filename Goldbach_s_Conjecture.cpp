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

const int mx = 10000000;

bool prime[mx + 1];

int main()
{
    fast_io;

    // Sieve
    for(int i = 0; i <= mx; i++)
        prime[i] = true;

    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= mx; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= mx; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int t;
    cin >> t;

    for(int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;

        int cnt = 0;

        for(int a = 2; a <= n / 2; a++)
        {
            int b = n - a;

            if(prime[a] && prime[b])
                cnt++;
        }

        cout << "Case " << tc << ": " << cnt << nl;
    }

    return 0;
}