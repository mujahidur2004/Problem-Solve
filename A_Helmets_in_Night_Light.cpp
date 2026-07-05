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
        ll n,p;
        cin >> n>>p;
        vector<ll> a(n);
        vector<ll> b(n);
        map<ll,ll>ms;
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) {
        cin >> b[i];
        ms[b[i]]=ms[b[i]]+a[i];
        }
        ll ans=p;
        n=n-1;
        for(auto ele:ms){
            if(ele.first<p && n){
                int tem=min(ele.second,n);
                ans+=(tem*ele.first);
                n=(n-tem);
            }
            else{
                break;
            }
        }
        ans=n*p+ans;
        cout<<ans<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}