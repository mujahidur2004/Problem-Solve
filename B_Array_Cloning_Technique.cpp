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
        int Max=0;
        map<int,int>mp;
        for (int i = 0; i < n; i++) {
            int ele;
            cin>>ele;
            mp[ele]++;
            Max=max(Max,mp[ele]);
        }
        int op=0;
        if(Max==n){
            cout<<0<<endl;
            continue;}

        while(Max<n){
            op++;
            int s=min(Max,n-Max);
            op+=s;
            Max+=s;
        }
        cout<<op<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}