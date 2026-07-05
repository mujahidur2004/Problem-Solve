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
    vector<int>maxv;
    
    for(int i=1;i<1e7;i*=2)maxv.push_back(i-1);
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll k;
        cin>>k;
        int i=0,res=0;;
        for(;i<32;i++){
            if((maxv[i]*k)>n){
                break;
            }
            else {
                res=((i)*k);
            }
            
        }
        int nows=(k*maxv[i-1]);
        while((nows+maxv[i]-maxv[i-1])<=n){
            res++;
            nows+=(maxv[i]-maxv[i-1]);
        }
        
            cout<<res<<nl;
       
       
        



        
    }
    return 0;
}