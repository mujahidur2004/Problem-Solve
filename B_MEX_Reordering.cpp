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
        int n,cnt=0;
        cin >> n;
        vector<int> a(n);
        map<int,int>mp;
        for (int i = 0; i < n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        if(mp[0]==0){
            cout<<"NO"<<endl;
        
        }
        else if(mp[0]>1 && mp[1]==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
       

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}