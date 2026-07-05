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
        ll n,f,a,b;
        cin >> n>>f>>a>>b;
        vector<ll> ar(n);

        for (int i = 0; i< n; i++) {
            cin >> ar[i];
        }
        ll time=min((((ar[0])-0)*a),(b));
        if(time>=f){
            cout<<"NO"<<nl;
            continue;
        }
        for(int i=1;i<n;i++){
            ll time1=min((((ar[i])-(ar[i-1]))*a),(b));
            time+=time1;

        }
        if(time>=f)cout<<"NO"<<endl;
        else cout<<"YES"<<nl;

        
    }
    return 0;
}