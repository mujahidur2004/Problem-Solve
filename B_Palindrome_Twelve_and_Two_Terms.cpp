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
        ll n;
        cin>>n;
        if(n==10)cout<<-1<<nl;
        else{
            int a= n%12;
            ll b=n-a;
            if(a==10){
                a+=12;
                b-=12;
            }
            cout<<a<<" "<< b<<nl;
        }
        
        

        
    }
    return 0;
}