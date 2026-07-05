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
        long long x, y, n;
        cin >> x >> y >> n;

        long long k = n - (n % x) + y;

        if (k > n){
             k -= x;

        }
           

        cout << k << "\n";
        
    }
    return 0;
}