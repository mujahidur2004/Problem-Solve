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
        int n,k;
        cin >> n>>k;
        map<int,int>mp;
        for (int i = 0; i < n; i++){
            int ele;
            cin>>ele;
            mp[ele]++;

        } 
        int ans=0,ind=0;
        for(int i=0;i<k;i++){
            if(mp[i]==0){
                ans++;
            }
        }
        cout<<max(ans,mp[k])<<endl;
      
       
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}