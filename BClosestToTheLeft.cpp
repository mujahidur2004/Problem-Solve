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

    int n, m;
    cin >> n >> m;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        int ele;
        cin >> ele;
        int ans = upper_bound(arr.begin(), arr.end(), ele) - arr.begin();
        cout<<ans<<nl;
    }

    return 0;
}