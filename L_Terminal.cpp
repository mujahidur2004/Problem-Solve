
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

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        
        int target = a[n - 1] % 2;

       
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == target)
                c++;
        }

        
        int r = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] % 2 == target)
                r++;
            else
                break;
        }

        cout << c - r + 1 << nl;
    }

    return 0;
}

