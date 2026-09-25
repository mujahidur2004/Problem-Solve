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
 
const ll M = 1e9 + 7;
 
ll Binary_Exp(int b, int e) {
    ll ans = 1;
    while (e > 0) {
        if (e & 1LL) {
            ans = ((ans % M) * (b % M))% M;
        }
        b = ((b % M ) * (b % M)) % M;
        e = e >> 1LL;
    }
    return ans;
 
 
}
 
int main() {
    
    //fast_io;
 
    int t;
    cin >> t;
    while (t--) {
        int e,b;
        cin >> b>>e;
        cout<< Binary_Exp( b , e)<<nl;
        
 
        
    }
    return 0;
}