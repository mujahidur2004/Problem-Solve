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
        
        vector<ll> a(3);

        for (int i = 0; i < 3; i++)
            cin >> a[i];
        sort(a.begin(),a.end());
       if(a[0]+a[1]>=a[2]){
        cout<<a[2]-a[0]<<nl;
       }
       else{
        cout<<a[1]<<nl;
       }
    }

    return 0;
}