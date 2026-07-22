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
        int n;
        cin >> n;
        vector<ll> a(n);
        map<int,vector<int>>mp;
        vector<int> pos;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);

        }
        int f=1;
        for(auto ele : mp){
            if(ele.second.size()==1){
                f=0;
                break;
            }
        }
        if(!f){
            cout<<-1<<nl;
            continue;
        }
        for(int i=0;i<n;i++){
            int s=mp[a[i]].size()-1;

            if(mp[a[i]][s]==i){
                cout<<mp[a[i]][s-1]+1<<" ";
                int la=mp[a[i]][s];
                mp[a[i]].pop_back();
                mp[a[i]].pop_back();
                mp[a[i]].push_back(la);

            }
            else{
                cout<<mp[a[i]][s]+1<<" ";
                mp[a[i]].pop_back();
            }
        }
        cout<<nl;

            

        
    }

    return 0;
}