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

    
        int n,m;
        cin >> n>>m;
        vector<ll> a(n),b(m);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int j=0;
        for(int i=0;i<n && j<m ;i++){
            if(a[i]==b[j]){
                j++;
            }
        }
        if(j==m)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

        
    
    return 0;
}