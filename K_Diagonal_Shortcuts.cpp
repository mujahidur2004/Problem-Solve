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
       ll n ,k;
       cin >>n >>k;
        ll ans =0;
        if(n%3==0){
            ans=n/3;
            ans*=2;
        }
        else if(n%3==1){
            ans= n/3;
            ans*=2;
            ans+=2;
        }
        else{
            ans= n/3;
            ans*=2;
            if(n>3){
                ans+=2;
            }
            else{
                ans+=4;
            }
            
        }
        cout<<min(ans,k)<<nl;
        
    }

    return 0;
}