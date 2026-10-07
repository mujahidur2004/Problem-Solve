/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
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

        string s;
        cin >> s;

        int f = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                f++;
        }

        // Length 1 must always be palindrome
        if (s[0] == '0')
        {
            cout << -1 << nl;
        }

        // Type 1: 111111...
        else if (f == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 'a';
            }

            cout << nl;
        }

        // Type 2: 100000...
        else if (f == 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << 'a';
            }

            cout << 'b' << nl;
        }

        // Type 3: 100...001
        else if (f == 2 && s[n - 1] == '1')
        {
            for (int i = 1; i <= n; i++)
            {
                // Odd n -> one middle 'b'
                // Even n -> two middle 'b's
                if (i == (n + 1) / 2)
                {
                    cout << 'b';
                }
                else if (n % 2 == 0 && i == n / 2 + 1)
                {
                    cout << 'b';
                }
                else
                {
                    cout << 'a';
                }
            }

            cout << nl;
        }

        // Type 4: 101010...
        else
        {
            bool ok = true;

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0 && s[i] != '1')
                {
                    ok = false;
                    break;
                }

                if (i % 2 == 1 && s[i] != '0')
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                        cout << 'a';
                    else
                        cout << 'b';
                }

                cout << nl;
            }
            else
            {
                cout << -1 << nl;
            }
        }
    }

    return 0;
}