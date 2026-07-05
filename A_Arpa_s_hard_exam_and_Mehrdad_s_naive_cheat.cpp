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

    ll n;
    cin>>n;
    if(n==0)cout<<1<<nl;
    else if(n%4==1)cout<<8<<nl;
    else if(n%4==2)cout<<4<<nl;
    else if(n%4==3)cout<<2<<nl;
    else cout<<6<<nl;

    return 0;
}