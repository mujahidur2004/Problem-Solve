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
        int cnt =0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) cnt++;
        }
        if(cnt>2)cout<<"NO"<<nl;
        else cout<<"YES"<<nl;


        
    }
    return 0;
}