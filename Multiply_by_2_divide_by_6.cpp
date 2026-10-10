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
        ll n;
        cin >> n;
       // cout<<n<<" ";
        if(n==1){
            cout<<0<<nl;
            continue;
        }
        map<int ,int>mp;
        ll temn =n;
        while(temn%3==0){
            mp[3]++;
            temn/=3;
        }
        while(temn%2==0){
            mp[2]++;
            temn/=2;
        }
        if(temn>1)mp[temn]++;
        if(mp.size()== 2 && mp[3] && mp[2]){
            if(mp[3]== mp[2]){
                cout<<mp[2]<<nl;
            }
            else if(mp[3]>mp[2]){
                cout<< mp[3]+(mp[3]-mp[2])<<nl;
            }
            else{
                cout<<-1<<nl;
            }

        }
        else if(mp.size()==1 && mp[3]){
            cout<<2 * mp[3]<<nl;

        }
        else cout<<-1<<nl;

        
    }

    return 0;
}