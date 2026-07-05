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

    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<nl;
    cout<<(a+b)<<nl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<nl;
    return 0;
}