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
        string a, b;
        cin >> a >> b;
        int open = 0, close = 0;
        bool f = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '(' && b[i] == '(')
            {
                open++;
                close++;
            }
            else if (a[i] == ')' && b[i] == ')')
            {
                open--;
                close--;
            }
            else
            {
                if (open >= close)
                {
                    open--;
                    close++;
                }
                else
                {
                    open++;
                    close--;
                }
            }
            if (open < 0 || close < 0)
            {
                f = 0;
                break;
            }
        }
        if (open != 0 || close != 0)
        {
            f = 0;
        }
        if (f)
            cout << "YES" << nl;
        else
            cout << " NO" << nl;
    }
    return 0;
}