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
        ll a,b,c,res1,res2;
        cin >> a>>b>>c;
        res1=(((b*(b+1))+1)/2);
        res2=((a*(a+1))/2)-(((a-b)*(a-b+1))/2);
        if((res1<= c) && res2>=c )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}