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
        ll a,b,second, n;
        cin >> a>>b>>n;
        //set<int> v;
        second=b;
        for (int i = 0; i < n; i++){
            ll ele;
            cin>>ele;
            second+=min(ele,a-1);
            //v.insert(ele);

        }
        cout<<second<<endl;

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}