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
        int n ,k;
        cin >> n >>k;
         ll ans =0;
         ans+=(k-1)*2;
         ans+=(pow(2,n-k+1));
         cout<<ans<<nl;

        

        
    }

    return 0;
}