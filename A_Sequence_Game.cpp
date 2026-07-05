#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
   
    int t;
    cin >> t;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n;
         long long Max=LLONG_MIN,Min=LLONG_MAX;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            long long ele;
            cin>>ele;
            Min=min(ele,Min);
            //Max=max(ele,)
            Max=max(ele,Max);

        } 
        long long x;
        cin>>x;
        if(x>=Min && x<=Max)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}