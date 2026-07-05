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

    
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>c){
            cout<<"Alice"<<nl;

        }
        else if(a==c){
            if(b>=d){
                cout<<"Alice"<<nl;
            }
            else{
                cout<<"Bob"<<nl;
            }
        }
        else{
            cout<<"Bob"<<nl;
        }

        
    
    return 0;
}