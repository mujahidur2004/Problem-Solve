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
        int a,b;
     
        cin>>a>>b;
        ll remain=abs(a-b);
        
        int ans = 0;
for(int i = 1; i * i <= remain; i++){
    if(remain % i == 0){
        if(i == remain / i) ans++;   
        else ans += 2;               
    }
}
        if(a==b){
            ans=1;
        }
        cout<<ans<<nl;
        for(int i =0;i<a;i++){
            cout<<1<<" ";
        }
        for(int i=0;i<b;i++){
            cout<<-1<<" ";
        }
        cout<<nl;

    }
    return 0;
}