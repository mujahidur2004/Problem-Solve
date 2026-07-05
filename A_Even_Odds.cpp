#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
   
        // --------- Problem Logic Starts Here ---------
        ll a,b,ans;
        cin>>a>>b;
        if(b<=((a+1)/2))cout<<(2*b-1)<<endl;
        else{
            ans=2*(b-((a+1)/2));
            cout<<ans<<endl;
        }
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}