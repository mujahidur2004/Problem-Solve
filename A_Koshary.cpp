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

    int t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin>>a>>b;
        if(a%2==1 && b%2==1){
            cout<<"NO"<<nl;

        }
        else cout<<"YES"<<nl;

        
    }
    return 0;
}