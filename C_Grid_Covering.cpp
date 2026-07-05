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
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        if(a==1 && b==1){
            cout<<"YES"<<nl;
            continue;
        }
        
        if(n%a==0 || m%b==0){
            cout<<"NO"<<nl;
            continue;
        }
        if(m%a==n%b){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
        
    }
    return 0;
}