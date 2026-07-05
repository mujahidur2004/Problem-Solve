#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    //-- Problem Logic Starts Here ---------
       
    int t,ans=1;
    string s;
    cin>>t>>s;
    int k= s.size();
    
    if(t%k==0){
        for(int i=t;i>=k;i=i-k){
            ans=ans*i;
        }
    }
    else{
        for(int i=t;i>=(t%k);i=i-k){
            ans=ans*i;
            
        }
    }
    cout<<ans<<endl;
    // --------- Problem Logic Ends Here -----------
    
    return 0;
}