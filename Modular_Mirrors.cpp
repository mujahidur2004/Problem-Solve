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
        int n,k;
        cin>>n>>k;
        if(n%3==0 || n%3==1){
            cout<<-1<<nl;
            continue;


        }
        for(int i=1;i<=n;i++){
            if(i%6==2  || i%6==1)cout<<1<<' ';
            else if(i%6==3 || i%6==0)cout<<0<<" ";
            else cout<<k-1<<" ";
        }
        cout<<nl;
    
    }
    return 0;
}