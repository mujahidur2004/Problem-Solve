#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;

    int n;
    cin >> n;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) c1++;
        else if (x == 2) c2++;
        else if (x == 3) c3++;
        else c4++;
    }
    int ans = 0;
    ans += c4;
    ans += c3;
    c1 = max(0, c1 - c3);
    ans += c2 / 2;
    if (c2 % 2) {
        ans++;
        c1 = max(0, c1 - 2);
    }
    ans += (c1 + 3) / 4;

    cout << ans << '\n';
    return 0;
}
