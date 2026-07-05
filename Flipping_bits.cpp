/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        unsigned int n;
        cin >> n;

        unsigned int result = ~n;   
        cout << result << nl;
    }

    return 0;
}