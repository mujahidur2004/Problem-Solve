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

const int N = 1e6 + 10;

int cnt[N];

int main()
{
    fast_io;

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            cnt[j]++;
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << cnt[n] << nl;
    }

    return 0;
}