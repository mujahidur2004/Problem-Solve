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

int main()
{
    fast_io;

    int n;
    cin >> n;

    vector<int> a(n);
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    
    vector<int> freq(mx + 1, 0);

    for (int x : a)
        freq[x]++;

    
    for (int d = mx; d >= 1; d--)
    {
        int cnt = 0;

        
        for (int multiple = d; multiple <= mx; multiple += d)
        {
            cnt += freq[multiple];

            
            if (cnt >= 2)
            {
                cout << d << nl;
                return 0;
            }
        }
    }

    return 0;
}