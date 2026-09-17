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

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n ,m;
        cin >>  n>> m;
        
        map<char,int>mp;
        string s;
        for (int i = 0; i < n; i++){
            cin >>s;
            mp[s[0]]=1;
            

        }
        
        bool ck =1;
        while(m--){
            cin >>s;
            for(int i=0;i<s.size();i++){
                if(!mp[s[i]+32])ck=0;
            }
        }
        if(ck)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
            


            

        
    }

    return 0;
}