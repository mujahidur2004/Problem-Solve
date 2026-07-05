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
        ll n;
        cin>>n;
        for (int k = 2; ; k++) {
            long long val = pow(2,k)-1;
            if (n % val == 0) {
                cout << n / val << '\n';
                break;
            }
        }
       //--------- Problem Logic Ends Here -----------
    }
    return 0;
}