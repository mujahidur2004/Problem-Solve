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

    string  s;
    cin>>s;
    int ind=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            ind=i;
            break;
        }
    }
    if(ind==-1) ind=0;
    for(int i=0;i<s.size();i++){
        if(i==ind)continue;
        cout<<s[i];
    }
    cout<<nl;
    return 0;
}