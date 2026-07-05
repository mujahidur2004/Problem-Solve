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
        int n,l,r;
        cin >> n>>l>>r;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<l-1;i++){
            cnt1+=a[i];
        }
        for(int i=r;i<n;i++){
            cnt2+=a[i];
        }
        cout<<max(cnt1,cnt2)<<nl;

        
    }
    return 0;
}