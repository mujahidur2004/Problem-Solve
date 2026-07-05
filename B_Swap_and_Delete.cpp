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
        string s;
        cin >> s;
        int Size = s.size();
        int One = 0, Zero = 0;

       
        for (int i = 0; i < Size; i++) {
            if (s[i] == '1') One++;
            else Zero++;
        }

        
        for (int i = 0; i < Size; i++) {
            if (s[i] == '0' && One > 0) {
                One--;
            }
            else if (s[i] == '1' && Zero > 0) {
                Zero--; 
            }
            else {
                break; 
            }
        }

        int res = One + Zero; 
        cout << res << '\n';
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}
