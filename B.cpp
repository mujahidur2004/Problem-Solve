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
        int n , m;
        cin >> n >>m;
        vector<ll> a(n);
        map<int,int>mp;

        for (int i = 0; i < n; i++){
             cin >> a[i];
             mp[a[i]]++;



        }
        ll ans = n;
        for(auto ele :mp){
            ll cur = ele/2;
            ans=max(ans,(mp[cur]+mp[ele-cur]));
        }
        cout<<ans<<endl;
           


        
    }

    return 0;
}