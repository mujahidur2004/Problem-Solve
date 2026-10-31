
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int n;
        long long K;
        cin >> n >> K;

        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        bool found = false;
        int total = 1 << (2 * n);

        for (int mask = 0; mask < total && !found; mask++) {
            long long sum = 0;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << (2 * i)))
                    sum += A[i];

                if (mask & (1 << (2 * i + 1)))
                    sum += A[i];
            }

            if (sum == K)
                found = true;
        }

        cout << "Case " << tc << ": "
             << (found ? "Yes" : "No") << '\n';
    }

    return 0;
}
