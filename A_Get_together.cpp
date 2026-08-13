/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> x(n), v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> v[i];
    }

    double low = 0;
    double high = 1e18;

    for (int k = 0; k < 100; k++)
    {
        double mid = (low + high) / 2;

        double left = -1e18;
        double right = 1e18;

        for (int i = 0; i < n; i++)
        {
            left = max(left, x[i] - v[i] * mid);
            right = min(right, x[i] + v[i] * mid);
        }

        if (left <= right)
            high = mid;
        else
            low = mid;
    }

    cout << fixed << setprecision(10) << high << nl;

    return 0;
}