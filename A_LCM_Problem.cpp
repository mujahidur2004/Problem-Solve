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
        if(2*a>b){
            cout<<-1<<" "<<-1<<nl;
        }
        else{
            cout<<a<<" "<<2*a<<nl;
        }

        
    }
    return 0;
}