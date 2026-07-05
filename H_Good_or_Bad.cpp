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
        int f=0;
        for(int i=0;i+2<s.size();i++){
            if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
                f=1;
                break;
            }
            else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1'){
                f=1;
                break;
            }

        }
        if(f)cout<<"Good"<<nl;
        else cout<<"Bad"<<nl;

        
    }
    return 0;
}