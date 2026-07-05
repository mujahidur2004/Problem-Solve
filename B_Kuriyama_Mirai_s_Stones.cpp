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
ll operation1(vector<ll>&a,int low,int high){
     return (a[high]-a[low-1]);

}
ll operation2(vector<ll>&b,int low,int high){
   
    return (b[high]-b[low-1]);
}

int main() {
    fast_io;

  
        int n;
        cin >> n;
        vector<ll> a(n+1),b(n+1);
        int ele;

        for (int i = 1; i<=n; i++) {
            cin >> ele;
            a[i]=a[i-1]+ele;
            b[i]=ele;
        }
        sort(b.begin(),b.end());
        for (int i = 1; i<=n; i++) {
           
            b[i]=b[i-1]+b[i];
           
        }

        int m;
        cin>>m;
        int x,y,z;
        while(m--){
           cin>>x>>y>>z;
            if(x==1){
                cout<<operation1(a,y,z)<<nl;
            }
            else{
                cout<<operation2(b,y,z)<<nl;

            }

        }

        
    
    return 0;
}]