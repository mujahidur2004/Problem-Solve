#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int m = n * k;
        vector<ll> a;
        for (int i = 0; i < m; i++) {
            ll ele;
            cin >> ele;
            a.push_back(ele);
        }

        sort(a.begin(), a.end());

        ll sum = 0;
        int mid = (n + 1) / 2;    
        int step = n - mid + 1;    
        int idx = m - step;       
        for (int i = 0; i < k; i++) {
            sum += a[idx];
            idx -= step;         
        }

        cout << sum << endl;
    }
    return 0;
}
