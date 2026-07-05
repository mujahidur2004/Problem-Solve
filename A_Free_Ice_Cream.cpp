#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    ll t ,remain,dep=0;
    cin >> t>>remain;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n;
        char c;
        cin>>c>>n;
        if(c=='+')remain+=n;
        else{
            if(remain-n>=0) remain-=n;
            else dep++;
        }
        // --------- Problem Logic Ends Here -----------
    }
    cout<<remain<<" "<<dep<<endl;
    return 0;
}