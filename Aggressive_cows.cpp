#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int>& a, int c, int d) {
    int cows = 1;
    int last = a[0];

    for (int i = 1; i < a.size(); i++) {
        if (a[i] - last >= d) {
            cows++;
            last = a[i];
        }

        if (cows >= c)
            return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int low = 0;
        int high = a[n - 1] - a[0];
        int ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (possible(a, c, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << '\n';
    }
}