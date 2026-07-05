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

    
        int n,x;
        cin >> n>>x;
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        if(x==0){
            if(a[0]==1)cout<<-1<<nl;
            else cout<<a[0]-1<<nl;
        }
        else{
            if(n==x)cout<<a[n-1]<<nl;
            else{
                if(a[x]==a[x-1])cout<<-1<<nl;
                else cout<<a[x-1]<<nl;
            }
        }

    
    
    return 0;
}