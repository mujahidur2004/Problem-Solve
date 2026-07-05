#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        ll s, k, m;
        cin >> s >> k >> m;

        if (s <= k)
            cout << max(0LL, s - (m % k)) <<endl;
        else
        {
            if ((m / k) % 2==1)
                cout << max(0LL, k - (m % k)) <<endl;
            else
                cout << max(0LL, s - (m % k)) <<endl;
        }
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}