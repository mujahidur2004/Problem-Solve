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

const int N = 1000000;

bool prime[N + 1];

int main()
{
    fast_io;

    // Sieve of Eratosthenes
    for(int i = 0; i <= N; i++)
        prime[i] = true;

    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= N; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int n;
    cin >> n;

    while(n--)
    {
        ll x;
        cin >> x;

        ll r = sqrtl(x);

        if(r * r == x && prime[r])
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}