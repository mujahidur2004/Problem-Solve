#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int N;
        cin >> N;

        vector<long long> A(N+2);
        for (int i = 1; i <= N; i++) cin >> A[i];

        // Prefix max
        vector<long long> pref(N+2, LLONG_MIN);
        for (int i = 1; i <= N; i++)
            pref[i] = max(pref[i-1], A[i]);

        // Suffix min
        vector<long long> suf(N+3, LLONG_MAX);
        for (int i = N; i >= 1; i--)
            suf[i] = min(suf[i+1], A[i]);

        int ans = -1;
        for (int i = 1; i <= N; i++) {
            long long left_max = pref[i-1];   // max of people in front
            long long right_min = suf[i+1];   // min of people behind

            if (A[i] > left_max && A[i] < right_min) {
                ans = i;
                break;
            }
        }

        cout << "Case " << tc << ": ";
        if (ans == -1) cout << "Humanity is doomed!\n";
        else cout << ans << "\n";
    }
    return 0;
}
