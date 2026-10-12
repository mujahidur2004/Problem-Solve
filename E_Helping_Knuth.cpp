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
        map<int,int>mp;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != -1){
                mp[a[i]]++;


            }
            

        }
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(mp[i]==0){ //  4   -1 -1 -1 -1
                ans.push_back(i);
            }
        }
        int j=ans.size()-1;
        for(int i=0;i<n;i++){
            if(a[i]==-1){
                cout<<ans[j]<<" ";
                j--;
            }
            else{
                cout<<a[i]<<" ";
            }
        }
        cout<<nl;

            
        
    }

    return 0;
}