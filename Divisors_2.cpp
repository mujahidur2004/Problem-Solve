
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

const int N = 1000000;

int d[N + 1];
bool bad[N + 1];

int main()
{
    fast_io;

    // Step 1: Count divisors
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            d[j]++;
        }
    }

    // Step 2: Check the divisor-count condition
    for (int m = 1; m <= N; m++)
    {
        for (int n = m; n <= N; n += m)
        {
            if (d[n] % d[m] != 0)
            {
                bad[n] = true;
            }
        }
    }

    // Step 3: Print every 108th valid number
    int cnt = 0;

    for (int n = 1; n <= N; n++)
    {
        if (d[n] > 3 && !bad[n])
        {
            cnt++;

            if (cnt % 108 == 0)
            {
                cout << n << nl;
            }
        }
    }

    return 0;
}