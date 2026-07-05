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
        cout<<s[0];
        int flag=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]==s[i] && flag){
                if(s[i]=='a') cout<<'b';
                else cout<<'a';
                cout<<s[i];
                flag=0;
            }
            else{
                cout<<s[i];
            }

        }
        if(flag){
            if(s[s.size()-1]=='a')cout<<'b';
            else cout<<'a';
        }
        cout<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}