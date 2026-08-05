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
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        int c,b;
        cin>>c;
        c--;
        a.erase(a.begin()+c);
        cin>>b>>c;
        a.erase(a.begin()+b-1,a.begin()+c-1);
        cout<<a.size()<<nl;
        for(auto ele : a){
            cout<<ele<<" ";
        }
        cout<<nl;

        
    
    return 0;
}