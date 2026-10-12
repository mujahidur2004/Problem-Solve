#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> getDivisors(ll n) {
    vector<ll> d;

    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            d.push_back(i);
            if (i != n / i)
                d.push_back(n / i);
        }
    }

    return d;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll x, y;
        cin >> x >> y;

        vector<ll> dx = getDivisors(x);
        vector<ll> dy = getDivisors(y);

        set<ll> divisors;

        for (ll a : dx) {
            for (ll b : dy) {
                divisors.insert(a * b);
            }
        }

        ll xy = x * y;

        cout << divisors.size() << '\n';

        for (ll a : divisors) {
            ll b = xy / a;
            cout << x + a << ' ' << y + b << '\n';
        }
    }

    return 0;
}