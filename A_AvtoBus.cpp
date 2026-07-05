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
        ll int n;
        cin >> n;
        if(n%2==1 || n<4){
            cout<<-1<<endl;
            continue;
        }
        
        cout<<((n+5)/6)<<' '<<((n)/4)<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}