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

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
       int n,x1,x2,k;
       
       cin>>n>>x1>>x2>>k;
       if(n<=3){
        cout<<1<<nl;
        continue;
       }
       
       ll res =min((n-abs(x1-x2)),(abs(x1-x2)))+k;
       cout<<res<<nl;

        
    }
    return 0;
}