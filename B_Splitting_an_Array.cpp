#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    int low = 0, high = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        low = max(low, v[i]);
        high += v[i];
    }

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        int segments = 1;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (sum + v[i] <= mid)
            {
                sum += v[i];
            }
            else
            {
                segments++;
                sum = v[i];
            }
        }

        if (segments <= k)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << low << endl;

    return 0;
}