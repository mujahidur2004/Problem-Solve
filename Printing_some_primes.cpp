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

    const int N = 100000000;

    vector<bool> prime(N, true);

    prime[0] = prime[1] = false;

    for (int i = 2; 1LL * i * i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int cnt = 0;

    for (int i = 2; i < N; i++)
    {
        if (prime[i])
        {
            cnt++;

            if (cnt % 100 == 1)
            {
                cout << i << nl;
            }
        }
    }

    return 0;
}