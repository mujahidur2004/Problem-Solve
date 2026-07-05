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
        int c,m,x;
        cin >>c>>m>>x;
        int res1=min(c,m);
        int res2=min((c+m+x)/3,res1);
    
        cout<<res2<<endl;
        // vector<int> a(n);
        // for (int i = 0; i < n; i++) cin >> a[i];

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}