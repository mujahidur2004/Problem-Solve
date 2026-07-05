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
    int x,n;
    ll ans=0;
    cin>>x>>n;
    for(int i=2;i<=n;i+=2){
        int j=i;
        ll Po=1;
        while(j--){
            Po*=x;
        }
        ans+=Po;
    }
    cout<<ans<<nl;

    return 0;
}