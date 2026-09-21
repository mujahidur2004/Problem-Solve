
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

int spf[N + 1];

int main()
{
    fast_io;

    // Smallest Prime Factor
    for (int i = 1; i <= N; i++)
        spf[i] = i;

    for (int i = 2; i * i <= N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= N; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        int temp = x;

        int lpf = spf[x];
        int gpf = 1;

        int omega = 0;
        int Omega = 0;

        ll divisors = 1;
        ll sum = 1;

        while (temp > 1)
        {
            int p = spf[temp];
            int cnt = 0;

            while (temp % p == 0)
            {
                temp /= p;
                cnt++;
            }

            // Number of distinct prime factors
            omega++;

            // Total number of prime factors
            Omega += cnt;

            // Greatest prime factor
            gpf = p;

            // d(x)
            divisors *= (cnt + 1);

            // sigma(x)
            ll pw = 1;
            ll curSum = 1;

            for (int i = 1; i <= cnt; i++)
            {
                pw *= p;
                curSum += pw;
            }

            sum *= curSum;
        }

        cout << lpf << ' '
             << gpf << ' '
             << omega << ' '
             << Omega << ' '
             << divisors << ' '
             << sum << nl;
    }

    return 0;
}

