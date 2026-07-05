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
        for(int i = n-2;i>=0;i--){
            a[i]= max(a[i],(a[i]+a[i+1]));
        }
        int cnt=0;

        for(int i=0;i<n;i++){
            if(a[i]>0)cnt++;
        }
        cout<<cnt<<nl;
        
    }
    return 0;
}