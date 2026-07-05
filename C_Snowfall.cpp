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
        int n;
        cin >> n;
        vector<ll> a,b,c,d;
        int ele;
        for (int i = 0; i< n; i++) {
            cin >> ele;
            
            if(ele%6==0)a.push_back(ele);
            else if(ele%2==0)b.push_back(ele);
            else if(ele%3==0)c.push_back(ele);
            else d.push_back(ele);
        }
        for(int i=0 ;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        for(int i=0 ;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        for(int i=0 ;i<d.size();i++){
            cout<<d[i]<<" ";
        }
        for(int i=0 ;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<nl;
        

        
    }
    return 0;
}