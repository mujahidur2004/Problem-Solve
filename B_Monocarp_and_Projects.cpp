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
const long long N = 1000000;

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        ll  x ,y ,k;
        cin >>x>>y >>k;
        ll Modu  = y%x;
        ll ans =0; ;
      ll last;
            
        for(int i=0 ;i<min(k,N);i++){
            
            last =((y+i)%(x+i));
            ans +=last;
        }
        if(k>=N){
            ans+=((k-N)*last);
        }
            cout<<ans<<nl;

        
        //cout<<ans<<nl;
    
        
    }

    return 0;
}