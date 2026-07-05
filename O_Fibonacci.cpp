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
ll fibo(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;

   
    return fibo(n-1)+fibo(n-2);
}

int main() {
    fast_io;

    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}