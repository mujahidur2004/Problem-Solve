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
        int n;
        cin >> n;

        vector<int> parent(n + 1);

        for (int i = 2; i <= n; i++)
        {
            cin >> parent[i];
        }

        int m;
        cin >> m;

        vector<int> target(m);

        for (int i = 0; i < m; i++)
        {
            cin >> target[i];
        }

        // Only one dam -> no camera needed
        if (m == 1)
        {
            cout << 0 << '\n';
            continue;
        }

        // Choose one target to skip.
        // If root is a target, skip root because it has no parent edge.
        int skip = -1;

        for (int x : target)
        {
            if (x == 1)
            {
                skip = 1;
                break;
            }
        }

        // If root is not a target, skip any target
        if (skip == -1)
        {
            skip = target[0];
        }

        // m-1 cameras
        cout << m - 1;

        for (int x : target)
        {
            if (x == skip)
                continue;

            // Put camera on edge (x, parent[x])
            cout << " " << x;
        }

        cout << '\n';
    }

    return 0;
}