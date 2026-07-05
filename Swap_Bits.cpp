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
        unsigned int N;
        cin >> N;

        bitset<32> b(N);

        for (int i = 0; i < 32; i += 2) {
            bool temp = b[i];
            b[i] = b[i + 1];
            b[i + 1] = temp;
            
        }

        cout << b.to_ulong() << " ";
    }

    return 0;
}