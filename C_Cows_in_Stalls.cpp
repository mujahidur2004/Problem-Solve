#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int low = 0;
    int high = v[n - 1] - v[0];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int cows = 1;
        int last = v[0];

        for (int i = 1; i < n; i++)
        {
            if (v[i] - last >= mid)
            {
                cows++;
                last = v[i];
            }
        }

        if (cows >= k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << high << endl;

    return 0;
}