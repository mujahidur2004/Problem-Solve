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
        ll n,ans=1;
        cin>>n;
        ll tem=n;
        for(int i=2;i*i<=n;i++){
            if(tem%i==0){
                ans*=i;
                while(tem%i==0){
                    tem=tem/i;
                }
            }
        }
        ans*=tem;
        cout<<ans<<nl;
        
    }
    return 0;
}