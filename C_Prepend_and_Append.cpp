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
        int n;
        cin >> n;
        vector<char> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int j=0;
        for(;2*j<n;j++)
        {
            if(a[j]==a[n-1-j])break;
        }
        cout<<n-(2*j)<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}