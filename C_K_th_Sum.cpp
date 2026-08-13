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

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int low = a[0] + b[0];
    int high = a[n - 1] + b[n - 1];

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            int pos = upper_bound(b.begin(), b.end(), mid - a[i]) - b.begin();

            cnt += pos;

            if (cnt >= k)
                break;
        }

        if (cnt >= k)
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