#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;

        int maxBoxes = d / m + 1;

        int towers = (n + maxBoxes - 1) / maxBoxes;

        cout << towers << '\n';
    }

    return 0;
}