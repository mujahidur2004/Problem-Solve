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

const int N = 25e2 + 10;

int dp[N];
vector<ll> a(N);

int List(int i,vector<ll>&a)
{
    int ans = 1;

    if(dp[i] != -1)
        return dp[i];

    for(int j = 0; j < i; j++)
    {
        if(a[i] > a[j])
        {
            ans = max(ans, List(j,a) + 1);
        }
    }

    return dp[i] = ans;
}

int main()
{
    fast_io;

    memset(dp, -1, sizeof(dp));

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        ans = max(ans, List(i,a));
    }

    cout << ans << nl;

    return 0;
}