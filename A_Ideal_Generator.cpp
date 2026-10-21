
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

    while (t--)
    {
        int k;
        cin >> k;

        if (k % 2 == 1)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
