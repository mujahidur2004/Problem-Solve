#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 1;

    for (int i = 0; i < n; i++) {
        int cnt = 1;

        
        for (int j = i - 1; j >= 0; j--) {
            if (h[j] <= h[j + 1]) cnt++;
            else break;
        }

        
        for (int j = i + 1; j < n; j++) {
            if (h[j] <= h[j - 1]) cnt++;
            else break;
        }

        ans = max(ans, cnt);
    }

    cout << ans << "\n";
    return 0;
}
