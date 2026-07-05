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
        int zerolast=0;
        for(int i=s.size()-1;i>=0;i-- ){
            if(s[i]!='0'){
                break;
            }
            else zerolast++;
        }
        int cnt=0;
        for(int i=0;i<s.size()-zerolast-1;i++){
            if(s[i]=='0')cnt++;
        }
        cout<<(s.size()-cnt-1)<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}