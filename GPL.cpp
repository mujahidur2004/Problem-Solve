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
        string s;
        int n;
        cin>>n;
        cin>>s;
        ll po=1;
        ll ans=0;
        for(int i=s.size()-1;i>=0;i--){
            int c=s[i]-'0';
            ans+=(c*po);
            po*=2;

        }
        cout<<ans<<nl;

        
    }
    return 0;
}