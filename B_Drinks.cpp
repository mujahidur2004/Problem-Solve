#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    //int t ;
    
        // --------- Problem Logic Starts Here ---------
        int n;
        cin >> n;
        long double ans=0;
        vector<double> a(n);
        for (int i = 0; i < n; i++){
             cin >> a[i];
             ans+=a[i];

        }

        
        cout << ans/(n)<< endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}