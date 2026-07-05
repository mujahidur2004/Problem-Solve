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

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        
            for(int j=1;j<=n;j++){
                cout<<j<<" ";
            }
             for(int j=1;j<=n;j++){
                cout<<j<<" ";
            }
             for(int i=2;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<1<<" ";
             for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<nl;
        }
        

        
    
    return 0;
}