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

    ll a,b;
    cin>>a>>b;
    if(b==1){
        cout<<a<<nl;
    }
    else {
        cout<<(1LL<<(__lg(a)+1))-1<<nl;
    }


    
    return 0;
}