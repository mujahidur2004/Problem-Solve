#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    
    while (t--) {
        ll a,b,n;
        cin>>a>>b>>n;
        if(a==b || (a/n>=b))
        {
            cout<<1<<endl;

        }
        else cout<<2<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}