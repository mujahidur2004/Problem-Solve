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
       
        if((n-1)%4==3){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}