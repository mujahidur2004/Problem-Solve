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
        if(a==b){
            cout<<0<<nl;
            continue;
        }
        ll cnt=0;
        ll small=min(a,b),big=max(a,b);
        while(big){

            if(big%2==0){
                cnt++;
                big=big/2;
                if(big==small){
                    break;
                }
            }
            else break;
        }
        if(small!=big)cout<<-1<<nl;
        else 
        cout<<(cnt+2)/3<<nl;
    }

    return 0;
}