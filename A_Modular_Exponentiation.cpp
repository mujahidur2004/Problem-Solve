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

    ll n,m;
    cin>>n>>m;
   if (n >= 27) {
        cout << m << endl;
    } 
    else {
        long long p = 1LL << n; // 2^n
        cout << m % p << endl;
    }
    
    return 0;
}