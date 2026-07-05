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
        vector<char> a(n);
        map<char,int>M;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            M[a[i]]++;

        } 
        char c=a[n-1];


        cout<<n-M[c]<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}