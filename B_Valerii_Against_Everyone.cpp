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
        set<ll>st;
        int ele;

        for (int i = 0; i< n; i++) {
            cin >>ele;
            st.insert(ele);
        }
        if(st.size()<n){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }

        
    }
    return 0;
}