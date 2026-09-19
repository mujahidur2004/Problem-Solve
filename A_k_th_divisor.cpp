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

    ll n , k;
    cin >> n >> k;
    vector<ll > ans;
    ans.push_back(-1);
    for( ll i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n){
                ans.push_back(i);
            }
            else {
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }
    if(ans.size()-1<k){
        cout<<-1<<nl;
    }
    else{
        sort(ans.begin(),ans.end());
        cout<<ans[k]<<nl;
    }

    

    return 0;
}