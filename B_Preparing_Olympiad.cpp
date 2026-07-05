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

    
        ll n,low,high,dif;
        cin >> n>>low>>high>>dif;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        ll ans=0;
        for(int i=0;i<n-1;i++){
             ll sum=a[i];
            for(int j=i+1;j<n;j++){
                sum+=a[j];
                if(sum >= low && sum<=high && ((a[j]-a[i]) >=dif)){
                    ans++;
                }

            }

        }
        cout<<ans<<nl;

        
    
    return 0;
}