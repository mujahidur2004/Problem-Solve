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
        ll big=0,small=0;
        for (int i = 0; i< n; i++) {
            cin >> b[i];
            if(a[i]>b[i])big+=a[i]-b[i];
            else small+=b[i]-a[i];
        }
        if(small==0)cout<<big+1<<endl;
        else {
            if(small<big)cout<<big<<endl;
            else cout<<big+1<<endl;
        }

        
    }
    return 0;
}