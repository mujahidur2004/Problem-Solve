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

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        multiset<ll> mls;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            mls.insert(x);
        }

        int ans = 0;

        while (!mls.empty()) {
            auto it = mls.begin();
            ll ele = *it;
            mls.erase(it);   
            auto need = mls.find(k - ele);
            if (need != mls.end()) {
                ans++;
                mls.erase(need);  
            }
        }

        cout << ans << nl;
    }
    return 0;
}
