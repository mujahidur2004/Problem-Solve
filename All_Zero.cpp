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
        int a,b,c;
        cin >>a>>b>>c;
        int res=0;
        if(c%3==0){
            res+=c/3;
            b-=(res);
            b-=(2*a);
            if(b==0 ){
                cout<<"Yes"<<nl;
            }
            else {
                cout<<"No"<<nl;
            }
        }
        else{
            cout<<"No"<<nl;
        }

        
    }
    return 0;
}