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
        int n,k;
        cin >> n >>k;
        vector<ll> a(n);
        map<int,int>mp;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;

        }
        int f=1,extra=0;
        int i=0;
        for(auto ele :mp){
            if(ele.first != i) break;
            if(((ele.second  +1  )/2 < k)) break;
            if(ele.second % 2 !=0 && ((ele.second  +1  )/2 >= k)){
                f=0;
                break;
            }
            i++;

        }
        if(!f) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
            

        
    }

    return 0;
}