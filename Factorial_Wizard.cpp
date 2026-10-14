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
    int tc=1;
    while (t--)
    {
        int n;
        cin >> n;
        map<int,int>mp;
        for(int i=2;i<=n;i++){
            int cur =i;
            for(int j=2;j*j <= cur;j++){
                if(cur% j==0){
                    while(cur % j==0){
                        mp[j]++;
                        cur/=j;
                    }
                }
                
            }
            if(cur>1)mp[cur]++;

        }
        int cnt =1;
        cout<<"Case "<<tc<<": "<<n <<" =";
        for(auto ele : mp){
            cout<<" "<<ele.first<<" ("<<ele.second<<") ";
            if(cnt!= mp.size()) cout<<"*";
            cnt++;

        }
        tc++;
        cout<<nl;

        
    }

    return 0;
}