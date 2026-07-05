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
        int cnt=0;
        cin>>s;
        for(int i = 0; i < s.size(); i++) 
        {
            if(s[i]=='1')cnt++;
        }
        cout<<cnt<<endl;
          

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}