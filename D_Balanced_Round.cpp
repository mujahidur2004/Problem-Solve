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
        int n,k,res=0;
        cin >> n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        int m=0;
        for(int i=1;i<n;i++){
            
            if(a[i]-a[i-1]<=k)
            {
                m++;
                res=max(m,res);
            }
            else m=0;
        }
        cout<<n-res-1<<endl;

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}