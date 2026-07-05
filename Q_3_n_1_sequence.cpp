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
ll Size(int n){
    if(n==1)return 1;
    if(n%2==0) return 1+Size(n/2);
    else return 1+Size(3*n+1);
}

int main() {
    fast_io;

    int t;
    cin >> t;
    cout<<Size(t)<<nl;
    
    return 0;
}