#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
   
        // --------- Problem Logic Starts Here ---------
        int n,big=0,small=0;
        cin >> n;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            char a=tolower(s[i]);
           mp[a]++;

        }
        if(mp.size()==26)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}