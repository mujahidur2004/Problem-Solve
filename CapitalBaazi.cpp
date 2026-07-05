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

    string s;
    getline(cin,s);
    
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')cout<<nl;
        else cout<<char(toupper(s[i]));
    }
    return 0;
}