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
        int n;
        cin >> n;
        vector<ll> a(n),b(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i< n; i++) {
            cin >> b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
            }
        }
        ll ans=*max_element(a.begin(),a.end());
        for(int i=0;i<n;i++){
            ans+=b[i];
        }
        cout<<ans<<nl;

        
    }
    return 0;
}