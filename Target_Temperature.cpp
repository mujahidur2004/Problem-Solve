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
        vector<ll> a(n);
        set<int>st;

        for (int i = 0; i< n; i++) {
            cin >> a[i];
            st.insert(a[i]);
        }
        if(st.size()==1){
            cout<<"Yes"<<nl;
            continue;
        }
        int f=0;
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                f++;
                
            }
        }
        if(f>1){
            cout<<"No"<<nl;
        }
        else{
            cout<<"Yes"<<nl;
        }

        
    }
    return 0;
}