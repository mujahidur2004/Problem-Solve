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

    
        int n;
        cin >> n;
        vector<ll> a,b;
        int ele;
        for (int i = 0; i< n; i++) {
            cin>>ele;
            if(ele%2==0)a.push_back(ele);
            else b.push_back(ele);
        }
        ll ans=0;
        ans+=accumulate(a.begin(),a.end(),0LL);
        sort(b.begin(),b.end());
        int i;
        int Size=b.size();
        if(Size%2==0)i=0;
        else i=1;
        for( ;i<Size;i++){
            ans+=b[i];
        }
        cout<<ans<<nl;

        
    
    return 0;
}