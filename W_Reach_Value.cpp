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
int possible(ll a,ll b){

    if(a==b) return 1;
    if(a>b) return 0;
   return 1*(possible(20*a*1LL,b ) || possible(10*a*1LL,b));
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if(possible(1,n)){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
        

        
    }
    return 0;
}