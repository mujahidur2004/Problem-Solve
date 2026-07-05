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

 
        int n,ele;
        cin >> n;
        set<int>st;
        for (int i = 0; i< n; i++) {
           cin >> ele;
           st.insert(ele);
        }
        cout<<st.size()<<nl;

    
    
    return 0;
}