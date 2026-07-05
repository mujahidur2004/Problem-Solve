/*
BISMILLAH HIR RAHMAN IR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        multiset<ll> st1, st2;

        // first window
        for (int i = 0; i < k; i++) {
            st1.insert(a[i]);
            if(b[i]!=-1){ st2.insert(b[i]); }

            
        }
        for(int i=0;i<k;i++){ 
            if(!st2.count(a[i]))
            { st2.insert(a[i]); }
        }
        if (st1 != st2) {
            cout << "NO" << nl;
            continue;
        }

        int ok = 1;

        // sliding window
        for (int i = k; i < n; i++) {

            // remove previous
            st1.erase(st1.find(a[i - k]));

            if (b[i - k] == -1) {
                st2.erase(st2.find(a[i - k]));
            } else {
                st2.erase(st2.find(b[i - k]));
            }

            // insert new
            st1.insert(a[i]);

            if (b[i] == -1) {
                st2.insert(a[i]);
            } else {
                st2.insert(b[i]);
            }

            // check equality
            if (st1 != st2) {
                ok = 0;
                break;
            }
        }

        if (ok) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}