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
        int n,k;
        cin >> n>>k;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        int res=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]%k==0){
                res=a[i];
                break;
            }
        }
        cout<<res<<nl;
    }
    return 0;
}