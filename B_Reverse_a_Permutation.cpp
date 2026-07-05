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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i;
        int value;
        bool ok = true;
        for (i = 0; i < n; i++)
        {
            if (a[i] != n - i)
            {
                value = n - i;
                ok = false;
                break;
            }
        }

        if (ok)
        {
            for (int i : a)
            {
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }

        int j;
        for (j = n - 1; j >= 0; j--)
        {
            if (a[j] == value)
            {
                break;
            }
        }

        for (int k = 0; k < i; k++)
        {
            cout << a[k] << " ";
        }
        for (int b = j; b >= i; b--)
        {
            cout << a[b] << " ";
        }
        for (int x = j + 1; x < n; x++)
        {
            cout << a[x] << " ";
        }
        cout << "\n";
    }

    return 0;
}