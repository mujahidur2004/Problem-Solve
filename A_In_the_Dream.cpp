#include <bits/stdc++.h>
using namespace std;

bool possible(int x, int y)
{
    int mx = max(x, y);
    int mn = min(x, y);

    return mx <= 2 * (mn + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (possible(a, b) && possible(c - a, d - b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}