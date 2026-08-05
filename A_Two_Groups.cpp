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
        int ele;
        ll pos=0,neg=0;

        for (int i = 0; i< n; i++) {
            cin >> ele;
            if(ele<0) neg+=(-1*ele);
            else pos+=ele;
        }
        cout<<max(pos,neg)-min(pos,neg)<<nl;

        
    }
    return 0;
}