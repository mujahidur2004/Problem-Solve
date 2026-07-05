#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
   
        // --------- Problem Logic Starts Here ---------
        int n,ans=0;
        cin >> n;
       string s;
       cin>>s;
       for(int i=2;i<n;i++){
        if(s[i-2]=='x'&& s[i-1]=='x' &&s[i]=='x'){
            ans++;
        }
       }
       cout<<ans<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}