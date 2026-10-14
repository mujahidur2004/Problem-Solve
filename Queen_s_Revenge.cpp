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
        string s;
        map<char,int>mp;
        for(int i=1;i<=8;i++){
            cin >>s;
            mp[s[0]] = (s[1]-'0');
        }
        if(mp.size()!= 8){
            cout<<"Invalid"<<nl;
            continue;
        }
        vector<pair<char,int>> v;
        for(auto ele : mp){
            v.push_back(ele);
        }
        //cout<<v.size();
        int f=1;
        for(int i=0;i<8;i++){
            for(int j= i+1;j< 8;j++){
                int dif1= v[j].first-v[i].first;
                int dif2 = abs(v[i].second - v[j].second);
                if( dif1== dif2 || (v[i].second == v[j].second)){
                    f=0;
                }

            }
        }
        if(f){
            cout<<"Valid"<<nl;
        }
        else{
             cout<<"Invalid"<<nl;
        }

        
    }

    return 0;
}