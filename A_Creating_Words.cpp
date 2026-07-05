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
        string a,b;
        cin>>a>>b;
        cout<<b[0]<<a[1]<<a[2]<<" ";
        cout<<a[0]<<b[1]<<b[2]<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}