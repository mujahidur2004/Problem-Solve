/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main() {
    fast_io;

    
        int n;
        cin >> n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            if(mp[v[i]]!=0){
                ans.push_back(v[i]);
                mp[v[i]]=0;
            }
        }
        cout<<ans.size()<<nl;
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<" ";

        }
        cout<<nl;

        
    
    return 0;
}