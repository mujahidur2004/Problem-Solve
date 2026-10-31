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
        string s1,s2;
        cin >>s1 >> s2;
        int cnt=0,ans=0;

        for(int i=0;i<n;i++){
            if(s1[i] != s2[i])cnt++;
           
            




        }

        ans= cnt%2;
        
        cout<<ans<<nl;

        
    }

    return 0;
}