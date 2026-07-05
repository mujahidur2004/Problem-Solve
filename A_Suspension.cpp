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
        int n,y,r;
        cin >> n>>y>>r;
       
        int res=min(n,(r+(y/2)));
        cout<<res<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}