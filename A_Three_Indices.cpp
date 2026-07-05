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
        int n,flag=1;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for(int i=1;i<n-1;i++)
        {
            if(a[i-1]<a[i] && a[i]>a[i+1])
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<" "<<endl;
                flag=0;
                break;
            }
        }
        if(flag)cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}