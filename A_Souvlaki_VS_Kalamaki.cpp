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
        int n,f=1;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        for(int i=1;i+1<n;i+=2)
        {
            if(a[i]!=a[i+1])
            {
                f=0;
                
            }

        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}