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
 long long ceil_division(long long a, long long b) {
	return (a + b - 1) / b;
}
int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        ll x,y,n;
        cin>>x>>y>>n;
        ll ans=0;
        ll total_stick=n+(y*n*1LL)-1;
        ans+=n;
       
        ans+=(((total_stick+(x-2)))/(x-1));
        cout<<ans<<nl;
    }
    return 0;
}