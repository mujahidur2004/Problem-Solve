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
         ll n, lo = 0, hi = INT_MAX;
        cin >> n;
        ll mid ;
        while (lo <= hi)
        {
             mid = lo + ((hi - lo) / 2);
            if ((mid * (mid - 1)) / 2 > n)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        
        cout << hi + (n - ((hi * (hi - 1)) / 2)) << nl;

        
    }
    return 0;
}