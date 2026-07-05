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
        int n=0,y=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='Y')y++;
            else n++;
        }
        if(y>1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}