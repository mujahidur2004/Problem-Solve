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
        bool f=0;
        map<int,int>mp;
        for (int i = 0; i< n; i++) {
            cin >> a[i];
            if(a[i]>2)f=1;
            mp[a[i]]++;
            
        }
        if(mp[2]>1)f=1;
        
        if(f)cout<<"YES\n";
        else  cout<<"NO\n";
        
    }
    return 0;
}