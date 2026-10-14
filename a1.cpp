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
        int n,k;
        cin >> n>> k;
        vector<ll> a(n+2);
        a[0]=0;

        for (int i = 0; i < n; i++)
            cin >> a[i+1];
        
        sort(a.begin(),a.end());
        int j=n-1;
        vector<int> confu,b(n+2);
        for(int i=;i<=n+1;i++){
            b[i]+=(b[i-1]+a[i]);
            cout<<b[i]<<" ";

        }

        cout<<nl;

        
    }

    return 0;
}