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
   
    double a1=b*log(a),b1=a*log(b);
    if(abs(a1-b1)<1e-9){
        cout<<"="<<nl;
    }
    else if(a1>b1)cout<<">"<<nl;
    else cout<<"<"<<nl;

    return 0;
}