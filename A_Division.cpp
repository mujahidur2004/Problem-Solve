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
        ll p,q;
        cin>>p>>q;
         if(p%q!=0){ 
            cout<<p<<nl;
        }
        else{
           vector<ll> factor,factor_value;
           for(int i=2;i*i<=q;i++){
                ll value=1;
                while(q%i==0){
                    value*=i;
                    q/=i;

                }
                if(value!=1){
                    factor.push_back(i);
                    factor_value.push_back(value);
                }
           }
           if(q!=1){
            factor.push_back(q);
            factor_value.push_back(q);
        }
            ll res=0;
            for(int i=0;i<factor.size();i++){
                ll tem=p;
                while(tem%factor[i]==0) tem/=factor[i];
                res=max(res,tem*(factor_value[i]/factor[i]));
            }
            cout<<res<<nl;

           }

        
    }
    return 0;
}