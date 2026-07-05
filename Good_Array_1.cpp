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
        map<int,int>mp;
        ll cnt=0;
        int f=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n-1;j++){
                if(mp[a[i]]%2==1){
                    cnt++;
                    mp[i]++;;
                }
                else{
                    mp[a[i]]++;
                }
                

            }
            
            
        }
        cout<<cnt<<nl;

        
    }
    return 0;
}