/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        unordered_map<int,int> omp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            omp[x]++;
        }

        int res = 0;
        for (auto ele : omp) {
            int cur = ele.first;
            int need = k - cur;

            if (!omp.count(need)) continue;
            if (cur > need) continue;

            if (cur == need)
                res += ele.second / 2;
            else
                res += min(ele.second, omp[need]);
        }

        cout << res << nl;
    }
    return 0;
}
