#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
  
        // --------- Problem Logic Starts Here ---------
        ll a,b,c,ans1,ans2,realans;
        cin>>a>>b>>c;
        if(a%c==0) ans1=a/c;
        else ans1=(a/c)+1;
        if(b%c==0) ans2=b/c;
        else ans2=(b/c)+1;
        realans=ans1*ans2;
        cout<<realans<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}