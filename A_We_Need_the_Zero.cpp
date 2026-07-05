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

        int sum = 0;
        for(int i=0;i<n;i++ )
        {
            sum =sum ^ a[i];
        }
        if(n%2==0) {
            if(sum==0)cout<<0<<endl;
            else cout<<-1<<endl;
        }
        else 
            cout<<sum<<endl;
  
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}