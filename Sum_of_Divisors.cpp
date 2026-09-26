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
const ll N = 1e9+7;

int main()
{
    fast_io;

    ll  n;
    cin >> n;

    ll ans =0;
    for(ll i =2;i*i <=n;i++){
        if(n%i==0){
            ans=(ans+(i%N)%N);
            if(i* i != n){
                ans=(ans+(((n/i)%N)%N));
            }
        }
    }
    cout<<ans<<nl;
    

    return 0;
}