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
        string s;
        cin>>s;
        s[s.size()-2]='i';
        s[s.size()-1]=' ';
        cout<<s<<endl;

        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}