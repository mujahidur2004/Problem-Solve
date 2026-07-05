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
        int res=0;
        while(n>2)
        {
            res++;
            n=(n-2);
        }
        cout<<res<<endl;
        // vector<int> a(n);
        // for (int i = 0; i < n; i++) cin >> a[i];

        // int sum = 0;
        // for (auto x : a) sum += x;
        // cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}