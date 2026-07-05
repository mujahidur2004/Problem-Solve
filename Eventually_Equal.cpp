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
        ll A, B, C;
        cin >> A >> B >> C;

        if (A == B) {
            cout << 0 << '\n';
        }
        else if (gcd(A, C) == gcd(B, C)) {
            cout << 1 << '\n';
        }
        else if (gcd(A, C + 1) == gcd(B, C + 1)) {
            cout << 2 << '\n';
        }
        else {
            cout << 3 << '\n';
        }



        
    }
    return 0;
}