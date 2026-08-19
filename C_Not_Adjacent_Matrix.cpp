/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 2)
        {
            cout << -1 << nl;
        }
        else
        {
            vector<vector<int>> a(n + 1, vector<int>(n + 1));

            int cnt = 1;

            // First put all odd numbers
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (cnt <= n * n)
                    {
                        a[i][j] = cnt;
                        cnt += 2;
                    }
                }
            }

            // Now put all even numbers
            cnt = 2;

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (a[i][j] == 0)
                    {
                        a[i][j] = cnt;
                        cnt += 2;
                    }
                }
            }

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << nl;
            }
        }
    }

    return 0;
}
