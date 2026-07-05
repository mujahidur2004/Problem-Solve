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
        int flag=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]){
                flag=1;
                break;
            }

        }
        if(flag) cout<<1<<endl;
        else cout<<s.size()<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}