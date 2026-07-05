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
        vector<ll> a(n);

        for (int i = 0; i< n; i++) {
            cin >> a[i];
        }
         int ans = 1;

        for (int i = 0; i < n; i++) {
            int X = a[i];

            int sf=0,minf=0,maxf=0, len = 0, cnt = 0;

            for (int j = 0; j < n; j++) {
                if (a[j] == X) sf++;
                else if(a[j]<a[i])minf++;
                else maxf++;

                len++;

                if (len % 2 == 1 && sf && ((minf== (sf-1+maxf)) ||(( minf +sf-1 )== maxf ))) {
                    cnt++;
                    sf=0,minf=0,maxf=0;
                    
                    len = 0;
                    
                }
            }

            ans = max(ans, cnt);
        }
        cout<<ans<<nl;

        
    }
    return 0;
}