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
        ll l,a,b;
        cin>>l>>a>>b;
        ll ans=a;
        
    
        for (int i = 1; i <= l; i++)
        {
            ans = max(ans, (a + (i * b)) % l);
        }
        cout<<ans<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}