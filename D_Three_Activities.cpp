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
        vector<ll> a(n),b(n),c(n),ans(n);
        map<ll,int>amp,bmp,cmp;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
            
        }
        for (int i = 0; i< n; i++) {
            cin >> b[i];
            
        }
        for (int i = 0; i< n; i++) {
            cin >> c[i];
            
        }
        for (int i = 0; i< n; i++) {
            ans[i]=max({a[i],b[i],c[i]});
            
        }
        sort(ans.begin(),ans.end());
        ll res=ans[n-1]+ans[n-2]+ans[n-3];
        cout<<res<<nl;
        

        
    }
    return 0;
}