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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int op=0;
        bool f=1;
        for(int i=1;i<=n-k;i++){
            if(s[i-1]=='1'){
                s[i-1]='0';
                if(s[i-1+k]=='1'){
                    s[i-1+k]='0';
                }
                else{
                    s[i-1+k]='1';
                }
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                f=0;
                break;
            }
        }
        if(f)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

        
    }
    return 0;
}