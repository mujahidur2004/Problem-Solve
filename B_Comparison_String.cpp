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
        int n,value =200;
        cin >> n;
        set<int> a;
        string s;
        cin>>s;
        int maxRun = 1, curRun = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                curRun++;
            } else {
                curRun = 1;
            }
            maxRun = max(maxRun, curRun);
        }

        cout << maxRun + 1 << "\n";
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}