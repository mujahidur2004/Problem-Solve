#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll b;
        cin >> b;

        ll prev = -4e18;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            ll m= a[i];
            ll n = b - a[i];

            ll x=min(m,n);
            ll y=max(m,n);
            if (x >= prev) {
                prev = x;
            }
             else if (y >= prev) {
                prev = y;
            }
             else {
                ok = false;
                break;
            }
        }

        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
