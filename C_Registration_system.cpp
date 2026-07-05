#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
     string s;
    map<string ,int>mp;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
       
        cin>>s;
        mp[s]++;
        if(mp[s]==1)cout<<"OK"<<endl;
        else cout<<s<<mp[s]-1<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}