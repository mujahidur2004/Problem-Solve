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
        vector<ll> a(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a.begin(), a.end());
       int mxln=1,cnt=1;
       for(int i=1;i<n;i++){
        if(a[i]==a[i-1] || a[i]== a[i-1]+1){
            cnt++;
            mxln=max(cnt,mxln);
        }
        else cnt=1;
       }
       cout<<n-mxln<<nl;
    }

    return 0;
}