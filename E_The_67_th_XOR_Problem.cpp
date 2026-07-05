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
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int j=n-1;j>=1;j--){
            for(int k=j-1;k>=0;k--){
                a[k]=(a[k]^a[j]);
            }
        }
        cout<<a[0]<<nl;

        
    }
    return 0;
}