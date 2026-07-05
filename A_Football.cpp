#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    map<string,int>a,b;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        
        string name;
        cin>>name;
        a[name]++;

        // --------- Problem Logic Ends Here -----------
    }
    if(a.begin()->second > a.rbegin()->second){
        cout<<a.begin()->first<<endl;
    }
    else{
        cout<<a.rbegin()->first<<endl;
    }
    return 0;
}