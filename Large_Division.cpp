
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

int main()
{
    fast_io;

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        string a;
        ll b;
        cin >> a >> b;

        ll rem = 0;

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '-') continue;

            rem = (rem * 10 + (a[i] - '0')) % abs(b);
        }

        cout << "Case " << tc << ": ";

        if (rem == 0)
            cout << "divisible" << nl;
        else
            cout << "not divisible" << nl;
    }

    return 0;
}