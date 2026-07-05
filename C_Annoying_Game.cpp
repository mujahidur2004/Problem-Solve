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
        int n,k,dif=INT_MIN,ind;
        cin >> n>>k;
        vector<int> a(n),b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) {
            int diferance=(a[i]-b[i]);
            if(dif<diferance){
                dif=diferance;
                ind=i;
            }

        }



        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}