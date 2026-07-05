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
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int cnt=n%(a+b+c);
        int ans=(n/(a+b+c))*3;
        if(cnt>0){
            ans++;
            cnt-=a;
        }
        if(cnt>0){
            ans++;
            cnt-=b;
        }
        if(cnt>0) ans++;
        
        cout<<ans<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}