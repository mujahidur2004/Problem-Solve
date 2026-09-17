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
        int n ,m;
        cin >> n >>m;
    
        vector<ll> a(n),b(m);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        int cnta=a[n-1],cntb = b[m-1];
        for(int i=1;i<n;i++){
            cnta+=(a[i-1]-a[i]+1);
        }
        for(int i=0;i<m-1;i++){
            cntb+=(b[i]-b[i+1]+1);
        }
        //cout<<cnta<<" "<<cntb<<nl;
        if(cnta>=cntb)cout<<1<<nl;
        else cout<<2<<nl;

        
    }

    return 0;
}