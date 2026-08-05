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
    while (t--) {
        string s;
        int a,b;
        cin>>a;
        if(a==1){
            cin>>s>>b;
            mp[s]=mp[s]+b;
        }
        else if(a==2){
            cin>>s;
            mp[s]=0;
        }
        else{
            cin>>s;
            cout<<mp[s]<<nl;
        }

        
    }
    return 0;
}