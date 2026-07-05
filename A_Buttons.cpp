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
        int a,b,c;
        cin >> a>>b>>c;
        if(c%2==1)a++;
        if(a>b)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}