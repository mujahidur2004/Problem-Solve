
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

const int MAX = 100000;
int divs[MAX + 1];

int main()
{
    fast_io;

    for (int i = 1; i <= MAX; i++)
    {
        for (int j = i; j <= MAX; j += i)
        {
            divs[j]++;
        }
    }

    int C;
    cin >> C;

    while (C--)
    {
        int K;
        ll low, high;
        cin >> K >> low >> high;

        ll L = (ll)ceil(sqrt((long double)low));
        ll R = (ll)sqrt((long double)high);

        ll ans = 0;

        for (ll x = L; x <= R; x++)
        {
            if (divs[x] == K)
                ans++;
        }

        cout << ans << nl;
    }

    return 0;
}