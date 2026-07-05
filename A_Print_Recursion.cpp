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
void recursion(int n){
    if(n==0) return;
    cout<<"I love Recursion"<<nl;
    recursion(n-1);
}

int main() {
    fast_io;

    int t;
    cin >> t;
    recursion(t);
    
    return 0;
}