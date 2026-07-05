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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int sum = 0;
        //for (auto x : a) sum += x;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]%2 == a[i+1]%2)
            {
                sum++;
            }
        }
        cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}