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
        int n;
        cin >> n;
        vector<ll> a(n);
        map<int,int>mp;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int ans= mp.size();
        ans=min(ans,2);
        
        if(mp[1]){
            
        }
        
        cout<<max(0,ans)<<nl;
            

        
    }

    return 0;
}