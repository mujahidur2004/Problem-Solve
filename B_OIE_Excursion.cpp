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
        int n,m;
        cin >> n>>m;
        vector<ll> a(n);
        int cnt=1,mx_cnt=0;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                cnt++;
            }
            else{
                mx_cnt=max(mx_cnt,cnt);
                cnt=1;
            }
        }
         mx_cnt=max(mx_cnt,cnt);
         if(mx_cnt>=m  ){
            cout<<"NO"<<nl;
         }
         else{
            cout<<"YES"<<nl;
         }

        
    }
    return 0;
}