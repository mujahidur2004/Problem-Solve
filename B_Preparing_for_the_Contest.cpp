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
        int i,j;
        for(i=1;i<=k;i++){
            cout<<i<<" ";
        }
        for(int j=n;j>k;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}