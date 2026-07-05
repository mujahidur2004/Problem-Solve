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
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
        int mn=*min_element(a.begin(),a.end());
        int maxe=*max_element(a.begin(),a.end());
        cout<<max((maxe-mn+1)/2,0)<<nl;

        
    }
    return 0;
}