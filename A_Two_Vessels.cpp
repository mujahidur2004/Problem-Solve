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
        ll a,b,c;
        cin>>a>>b>>c;
        ll res=(((abs(a-b)+1)/2)+(c-1))/c;
        cout<<res<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}