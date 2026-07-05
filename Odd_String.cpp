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
        int n,f=1;
        cin >> n;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            if(mp[s[i]]>2){
                f=0;
                break;
            }

        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}