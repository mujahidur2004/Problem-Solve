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

    
        int n,t;
        cin >> n>>t;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        ll low=1,high=1e18,res=-1;
        while(low<=high){
            ll mid=low+(high-low)/2;
            ll cnt=0;
            for( int i=0;i<n;i++){
                cnt+=mid/a[i];
                 if (cnt >= t) break;
            }
            if(cnt>=t){
                res=mid;
                high=mid-1;
            }
            else{
            low=mid+1;
            }
        }
        cout<<res<<nl;

        
    
    return 0;
}