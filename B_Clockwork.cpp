#include "bits/stdc++.h"
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bool bad = false;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int worst = 2 * max((n - 1 - i), i);
            if(worst >= x) {
                bad = true;
            }
        }
        if(bad) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}