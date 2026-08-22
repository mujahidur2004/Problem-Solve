#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    int maxPos = 0;
    int minPos = 0;

    // First occurrence of maximum
    for (int i = 0; i < n; i++) {
        if (a[i] == mx) {
            maxPos = i;
            break;
        }
    }

    // Last occurrence of minimum
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == mn) {
            minPos = i;
            break;
        }
    }

    int ans = maxPos + (n - 1 - minPos);

    // Maximum is after minimum
    if (maxPos > minPos) {
        ans--;
    }

    cout << ans << '\n';

    return 0;
}