#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
     
        // --------- Problem Logic Starts Here ---------
        ll int ele;
        
        set<ll int> a;
        for (int i = 0; i < 4; i++){
            cin>>ele;
            a.insert(ele);
        } 

        cout << (4-(a.size())) << endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}