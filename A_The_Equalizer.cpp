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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%2==1) sum++;
        }

        if (sum % 2 == 1) {
            cout << "YES" << nl;
        } 
        else {
            if((n*k)%2==1){
                cout<<"NO"<<nl;
            }
            else{
                cout<<"YES"<<nl;
            }
        }
    }
    return 0;
}