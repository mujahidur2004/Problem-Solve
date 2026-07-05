#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
   
        // --------- Problem Logic Starts Here ---------
        int n,k;
        cin >>k>> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int res=INT_MAX;
       sort(a.begin(),a.end());
       for(int i=0;i<n-k+1  ;i++){
        res=min(res,a[i+k-1]-a[i]);

       }
       cout<<res<<endl;

        // --------- Problem Logic Ends Here -----------
    
    return 0;
}