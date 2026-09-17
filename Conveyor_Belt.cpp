/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
//Accepted
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
        int k;
        cin>>k;
        int cnt1=0,cnt2=0;
        string s;
        cin>>s;
        for(int i=0;i<k;i++){
            if(s[i]=='R')cnt1++;
        }
        for(int i=k-1;i<n;i++){
            if(s[i]=='L')cnt2++;
        }
        cout<<min(cnt1,cnt2)<<nl;

        
    }

    return 0;
}
