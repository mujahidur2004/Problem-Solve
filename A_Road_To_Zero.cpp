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
        ll x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;
        ll ans=0;
        
            
            if((2*a)<b){
                ans+=(x*a);
                ans+=(y*a);
            }
            else{
                ans+=(min(x,y)*b);
                ans+=(abs(x-y)*a);

            
            }

        
        cout<<ans<<endl;
       
        
    }
    return 0;
}