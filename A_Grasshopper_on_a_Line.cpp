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
        int n,k;
        cin >> n>>k;
        if(n%k!=0){
            cout<<1<<endl;
            cout<<n<<endl;

        }
        else{
            cout<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
        }
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}