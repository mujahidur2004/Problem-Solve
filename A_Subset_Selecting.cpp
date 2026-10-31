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
        cin >> n >>k;
        vector<ll> a(n);
        map<int,int>mp;

        for (int i = 0; i < n; i++){
             cin >> a[i];
             mp[a[i]]++;
        }
        int i=0;
        int extra = mp[0];
        while(extra >= k && mp[i]){
            extra -= k;

            i++;
            extra += mp[i];
        }
        cout<<i<<nl;
           

        
    }

    return 0;
}