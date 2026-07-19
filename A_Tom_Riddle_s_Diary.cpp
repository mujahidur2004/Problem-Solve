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
    map<string ,int>mp;

    int t;
    cin >> t;
    string s;
    while (t--) {
        
        cin>>s;
        if(mp[s])cout<<"YES\n";
        else cout<<"NO\n";
        mp[s]++;

        
    }
    return 0;
}