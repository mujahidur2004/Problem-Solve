#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

ll xor_upto(ll n) {
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n+1;
    return 0;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;

        ll X = xor_upto(a-1);
        ll need = X ^ b;

        if(need == 0) cout << a << '\n';
        else if(need == a) cout << a+2 << '\n';
        else cout << a+1 << '\n';
    }
    return 0;
}