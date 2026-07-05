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
        vector<ll> a(n),res(n+1);
        map<int,int>mp,mp1;
        

        for (int i = 0; i< n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int cntgap=0;
        for(int i=0;i<=n;i++){
            if(mp[i]==0)cntgap++;
            mp1[i+1]=cntgap;


        }
        for(int i=0;i<=n;i++){
            if(mp1[i]==0){
                cout<<mp[i]<<" ";
            }
            else{
                cout<<max(mp1[i],mp[i])<<" ";
            }

        }
        cout<<nl;
        

        
    }
    return 0;
}