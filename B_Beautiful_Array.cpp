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
        ll n ,k,b,s;
        cin>>n>>k>>b>>s;
        ll min_s=k*b;
        ll max_s=min_s+(n*(k-1));
        if(s>max_s || s<min_s){
            cout<<-1<<nl;
            continue;
        }
        vector<ll>ans(n,0);
        ans[0]=min_s;
        s-=min_s;
        for(int i=0;i<n;i++){
             ll add =min(k-1,s);
             ans[i]+=add;
             s-=add;
             cout<<ans[i]<<" ";

        }
        cout<<nl;

    }
    return 0;
}