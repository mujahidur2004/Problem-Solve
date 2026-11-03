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
        if(n==2){
            int a , b;
            cin >> a >> b;
            if(a==1 && b==1){
                cout<< -1<<nl;
            }
            else if( a!=1 || b!=1){
                cout<<a+b-1<<nl;
            }
            continue;
        }
        map<int,vector<int> >mp;
        ll sum=0;

        for (int i = 0; i < n; i++){
             cin >> a[i];
             sum+= a[i];
             if(a[i]==1)mp[a[i]].push_back(i+1);
             else mp[2].push_back(i+1);
             
        }
    
        if(mp[1].size()== n)cout<<-1<<nl;
        else if(mp[1].size()< n-2){
            cout<< sum-1<<nl;
        }

        else if( mp[1].size() == n-2){

            if( mp[2][0] == 1 && mp[2][1]== n){
                cout<< sum-n+1<<nl;
            }
            else cout<< sum-1<<nl;
        }
        else if(mp[1].size()== n-1){
            if(mp[2][0]== 1 || mp[2][0]== n)cout<<sum-n+1<<nl;
            else cout<< sum-1<<nl;

        }


           

        
    }

    return 0;
}