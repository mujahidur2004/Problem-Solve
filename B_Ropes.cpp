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

int main()
{
    fast_io;

    int n , k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
        double ans;
        double l=0 , h=1e7+10;
        while(h-l > 0.000001){
            int cnt=0;
            double mid=l +(h-l)/2;
            for(int i=0;i<n;i++){
                cnt+=(a[i]/mid);
            }
            if(cnt>=k){
                ans=mid;
                l=mid;
            }
            else{
                h=mid;
            }
        }
        cout<<fixed<<setprecision(6)<<ans<<nl;

    

    return 0;
}