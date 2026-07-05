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
        int n,x,k;
        cin >> n>>x>>k;
        vector<ll> a(1001,0);
        int ele;

        for (int i = 0; i< n; i++) {
            cin >> ele;
            a[ele]++;
        }
        int ans=0;
        for(int i=1000;i>=0;i--){
            if(a[i]>0){
                ans+=a[i];
                k--;
                if(!k)break;

            }
        }
        cout<<min(ans,x)<<nl;

        
    }
    return 0;
}