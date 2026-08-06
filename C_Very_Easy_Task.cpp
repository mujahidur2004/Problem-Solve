#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x, y;
    cin >> n >> x >> y;

    if (n == 1) {
        cout << min(x, y);
        return 0;
    }

    ll first = min(x, y);

    ll low = 0;
    ll high = 1e18;

    while (low < high) {
        ll mid = low + (high - low) / 2;

        if (mid / x + mid / y >= n - 1)
            high = mid;
        else
            low = mid + 1;
    }

    cout << first + low;

    return 0;
}