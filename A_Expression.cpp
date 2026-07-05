#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
        // --------- Problem Logic Starts Here ---------
        
        int a,b,c;
        cin>>a>>b>>c;
        int ans=a+b+c;
        ans=max(ans,(a+b)*c);
	    ans=max(ans,a*(b+c));
	    ans=max(ans,a*b*c);
        cout<<ans<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}