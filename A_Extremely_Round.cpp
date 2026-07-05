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
        string s;
        s=to_string(n);
        int d=s.size()-1;
        int k=s[0]-'0';
        int cnt=9* d +k;
        cout<<cnt<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}