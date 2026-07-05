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
        int n,k,ele;
        cin >> n>>k;
        vector<ll> a;

        for (int i = 0; i< n; i++) {
            cin>>ele;
            if(ele!=k)a.push_back(ele);
            
        }
        int f=1;
        n=a.size();
        for(int i=0;i<n/2;i++){
            if(a[i]!=a[n-i-1]){
                f=0;
                break;
            }

        }
        if(f)cout<<"Yes"<<nl;
        else cout<<"No"<<nl;

        
    }
    return 0;
}