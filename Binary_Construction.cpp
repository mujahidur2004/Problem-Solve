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
        
        int f=n+1/2;
        int k=f%2;

        for (int i = 0; i<f/2; i++) {
            cout<<1;
        }
        for (int i = 0; i<n/2; i++) {
            cout<<0;
        }
        for (int i = 0; i<f/2; i++) {
            cout<<1;
        }
        if(k)cout<<1;
        cout<<nl;

        
    }
    return 0;
}