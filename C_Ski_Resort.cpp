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
        ll n,x,y,cnt=0,ans=0;
        cin >> n>>x>>y;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]<=y){
                cnt++;
            }
            else{
                if(cnt>=x){
                    ll N=cnt-x+1;
                    ans+=((N*(N+1))/2);
                }
                cnt=0;
            }

        } 
         if(cnt>=x){
                    ll N=cnt-x+1;
                    ans+=((N*(N+1))/2);
                }

      
        cout << ans << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}