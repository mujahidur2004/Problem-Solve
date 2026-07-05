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
ll query(ll a){
    cout<<"? "<<a<<" ";
    for(  ll i=1;i<=a; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    ll input;
    cin>>input;
    return input;
}
void ans(ll a){
    cout<<"! "<<a<<endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> ar(n);
        for (auto &i : ar)
            cin >> i;
 
        for (ll i = 1; i < n; i++)
            ar[i] += ar[i - 1];
 
        ll lo = 0, hi = n - 1;
        while (hi > lo)
        {
            ll mid = lo + ((hi - lo) / 2);
            ll sum = query(mid + 1);
 
            if (sum > ar[mid])
                hi = mid;
            else
                lo = mid + 1;
        }
        ans(hi+1);

        
    }
    return 0;
}