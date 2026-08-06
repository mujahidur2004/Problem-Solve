#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 0, r = 1;

    while ((__int128)(r / w) * (r / h) < n)
        r *= 2;

    while (r - l > 1)
    {
        ll mid = l + (r - l) / 2;

        if ((__int128)(mid / w) * (mid / h) >= n)
            r = mid;
        else
            l = mid;
    }

    cout << r << '\n';
}