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
        
        map<int,int>mp;

        for (int i = 0; i< n; i++) {
            int ele;
            cin>>ele;
            mp[ele]++;
        }
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            mp[ele]--;
        }
        int f=1;
        for(auto ele:mp){

            if(ele.second!=0){
                f=0;
                break;
            }
        }
        if(f)cout<<"yes"<<nl;
        else cout<<"no"<<nl;

        
    
    return 0;
}