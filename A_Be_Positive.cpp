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
        int res=0,cnt=0;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if(a[i]==0)
            {
                res++;
            }
            else if(a[i]==-1)
            {
                cnt++;
            }

        }
        res=res+(2*(cnt%2));

        // int sum = 0;
        // for (auto x : a) sum += x;
        cout << res << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}