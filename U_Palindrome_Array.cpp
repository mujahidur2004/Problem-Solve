#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    // cin >> t;
    // while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n,flag=0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        if(n==1){
            cout<<"YES"<<endl;
            return 0;
        }

        for(int j=0,k=n-1;j<k;j++,k--)
        {
            if(a[j]!=a[k])
            {
                flag=1;
                break;
            }
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        // --------- Problem Logic Ends Here -----------
    //}
    return 0;
}