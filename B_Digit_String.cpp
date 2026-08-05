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
#define gcd __gcd

int main() {

    fast_io;

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        int one = 0;
        int two = 0;
        int three = 0;

        for (char c : s) {

            if (c == '1') {
                one++;
            }

            else if (c == '2') {
                two = max(two + 1, one + 1);
            }

            else if (c == '3') {
                three = max({three + 1, one + 1, two + 1});
            }

            else {

                // cannot keep 4
            }
        }

        int keep = max({one, two, three});

        cout << (int)s.size() - keep << nl;
    }

    return 0;
}