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
        for(int i=0;i<n;i++){
            int mi=0,ma=0;
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    ma++;
                }
                if(a[i]<a[j]){
                    mi++;
                }
            }
            cout<<max(mi,ma)<<" ";
        }
        cout<<nl;

        
    }
    return 0;
}