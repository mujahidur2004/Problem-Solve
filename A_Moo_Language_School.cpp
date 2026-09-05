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
        int n ,k;
        cin >> n>>k;
        string s;
        cin >>s;
        int ans=0;
        for(int i=0;i<n;i+=k)
        {
            bool ck=0;
            for(int j=0;j<k;j++){
                if(s[i+j]=='0'){
                    ck=1;
                }

            }
            if(!ck)ans++;
        }
        cout<<ans<<nl;
        
    }

    return 0;
}