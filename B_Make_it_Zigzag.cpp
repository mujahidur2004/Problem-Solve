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
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }

        ll ans=0,Max=a[0];
        
        for(int i=1;i<n;i++){
            Max=max(Max,a[i]);
            if(i%2==1){
                a[i]=max(a[i],Max);

            }
            

        }
        for(int i=1;i<n;i++){
            if(i%2==0){
                if(a[i]>=a[i-1]){
                    ans+=(a[i]-a[i-1]+1);
                }
            }
        }
        if(a[0]>=a[1]){
            ans+=(a[1]-a[0]+1);
            a[0]=ans;
        }
        cout<<ans<<nl;
    }
    return 0;
}