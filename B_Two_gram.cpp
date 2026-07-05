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

   
        string s,a;
        int n;
        cin>>n;
        cin>>s;
        map<string,int>mp;
        for(int i=0;i<n-1;i++){
            a="";
            a+=s[i];
            a+=s[i+1];
            mp[a]++;
            
        }
        int ans=-1;
        for(auto ele :mp){
            if(ele.second>=ans){
                ans=ele.second;
                a=ele.first;
            }
        }
        cout<<a<<nl;

        
    
    return 0;
}