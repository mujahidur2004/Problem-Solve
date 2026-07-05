#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    
    // --------- Problem Logic Starts Here ---------
      

    ll i,j,k,n,m,ans=0;
    string s;
    map<string,ll>mp;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>s;
        mp[s]++;   
    }
    for(i=0;i<n;i++){
        cin>>s;
        if(mp[s]) mp[s]--;            
        else ans++;                     
    }
    cout<<ans<<endl;
    


    // --------- Problem Logic Ends Here -----------
    
    return 0;
}