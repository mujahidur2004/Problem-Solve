#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, X, K;
        cin >> N >> X >> K;

        int rem = X % K;

        // Option 1: reduce X to previous multiple
        int ans = rem;

        // Option 2: increase X to next multiple (if possible)
        if (X + (K - rem) <= N) {
            ans = min(ans, K - rem);
        }

        // Option 3: make 0 students go
        ans = min(ans, X);

        cout << ans << endl;
    }
    return 0;
}
