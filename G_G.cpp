#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {

        // --------- Problem Logic Starts Here ---------
        int a,b;
        cin>>a>>b;
        int ans=a-b;
        if(ans%10==9)cout<<ans-1<<endl;
        else cout<<ans+1<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}