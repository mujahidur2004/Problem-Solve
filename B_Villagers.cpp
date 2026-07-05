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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        ll res=0;
        sort(a.begin(),a.end());
        for(int i=n-1;i>=1;i-=2){
            res+=max(a[i],a[i-1]);

        }
        if(n%2==1)res+=a[0];
        cout<<res<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}