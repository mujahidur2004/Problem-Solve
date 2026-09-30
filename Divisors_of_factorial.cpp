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

const ll MOD = 1e9 + 7;
const int N = 50000;

vector<int> primes;

void sieve()
{
    vector<bool> isPrime(N + 1, true);

    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i <= N; i++)
    {
        if(isPrime[i])
        {
            for(int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for(int i = 2; i <= N; i++)
    {
        if(isPrime[i])
            primes.push_back(i);
    }
}

int main()
{
    fast_io;

    sieve();

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        ll ans = 1;

        for(int p : primes)
        {
            if(p > n)
                break;

            ll power = 0;
            ll x = n;

            while(x > 0)
            {
                x /= p;
                power += x;
            }

            ans = ans * (power + 1) % MOD;
        }

        cout << ans << nl;
    }

    return 0;
}