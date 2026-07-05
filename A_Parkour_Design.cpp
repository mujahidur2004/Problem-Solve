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
       int a,b;
       cin>>a>>b;
       int pos,neg;
       if(b<0){
        neg=(-1*b);
        a-=(neg*4);
        if(a<0){
            cout<<"NO"<<nl;
            continue;
        }
        if(a%3==0|| a%6==0 || a%9==0){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }

       }
       else if(b==0){
         if(a%3==0|| a%6==0 || a%9==0){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }

       }
       else{
        a-=(2*b);
        if(a<0){
            cout<<"NO"<<nl;
            continue;
        }
        if(a%3==0|| a%6==0 || a%9==0){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }

       }

        
    }
    return 0;
}