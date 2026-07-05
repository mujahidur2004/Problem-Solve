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
        int a=s[1]-'0';
        for(int i=1;i<9;i++){
            if(i==a)continue;
            cout<<s[0]<<i<<endl;

        }
        for(int i=1;i<9;i++){
            char c=s[0],b=96+i;
            if(c==b)continue;
            cout<<b<<a<<endl;

        }
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}