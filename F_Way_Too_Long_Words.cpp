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
        string s;
        cin>>s;
        if(s.size()>10){
            int Si=s.size();
            cout<<s[0]<<Si-2<<s[Si-1]<<nl;
        }
        else cout<<s<<nl;

        
    }
    return 0;
}