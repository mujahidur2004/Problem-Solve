#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        string s;
    cin >> s;
 
    int n = s.size();
    int ans = 0;
        // --------- Problem Logic Starts Here ---------
        for (int i = 1; i < n - 1; i++){
        if (s[i] == 'u')
        {
            if (s[i - 1] == 'u')
            {
                s[i - 1] = 's';
                ans++;
            }

            if (s[i + 1] == 'u')
            {
                s[i + 1] = 's';
                ans++;
            }
        }
    }
    if (s[n - 1] == 'u')
        ans++;
    if (s[0] == 'u')
        ans++;

    cout << ans << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}