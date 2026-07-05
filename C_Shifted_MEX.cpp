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
        vector<int> a;
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin>>ele;
            mp[ele]++;
            if(mp[ele]==1)a.push_back(ele);


        } 

        sort(a.begin(),a.end());
        int cnt=1,res=1;
        for(int i=0;i<a.size()-1;i++){
            if(a[i+1]-a[i]==1){
                cnt++;
            }
            else cnt=1;
            res=max(res,cnt);
             

        }
        cout<<res<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}