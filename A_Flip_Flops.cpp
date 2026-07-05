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
        ll n,po,flip;
        cin >> n>>po>>flip;
        vector<ll> a(n);
        

        for (ll i = 0; i< n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(ll i=0;i<n;i++){
            if(po<a[i]){
                break;
            }
            else{
                ll increase=min({po-a[i],flip});
                
                flip-=increase;
                po+=(a[i]+increase);
                
            }
        }
        cout<<po<<nl;

        
    }
    return 0;
}