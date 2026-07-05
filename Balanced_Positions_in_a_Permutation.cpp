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
        int cnt =0;
        for(int i=0;i<n;i++){
            int leftcount=0,rightcount=0;
            for(int j=0;j<i;j++){
                if(a[j]<a[i])leftcount++;
            }
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i])rightcount++;
            }
            if(rightcount==leftcount)cnt++;
        }
        cout<<cnt<<nl;
        
    }
    return 0;
}