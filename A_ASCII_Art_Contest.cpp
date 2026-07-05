#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    //cin >> t;
    //while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n=3;
        //cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(),a.end());
        if((a[2]-a[0])>=10) cout<<"check again"<<endl;
        else cout<<"final "<<a[1]<<endl;
        // --------- Problem Logic Ends Here -----------
    //}
    return 0;
}