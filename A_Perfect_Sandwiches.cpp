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
        vector<ll> a(n);
        if(k>=n){
            cout<<-1<<nl;
            continue;
        }
        if( 2 * k <= n){
            cout<<k<<nl;
        }
        else{
            int ans=0;
            while(n-k >=1){
                ans++;
                n-=2;
                k--;
            }
            cout<<ans<<nl;
        }

        

        
    }

    return 0;
}