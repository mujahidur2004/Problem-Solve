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
        string s;
        cin >> s;
        int i=0;
        int cnt=0;
        for(int k=0;k<n;k++){
            if(s[k]=='1')cnt++;
        }
        if(cnt==2 && n!=2){
            cout<<1<<nl;
        continue;
            }
        set<int>s1,s2;

        for(;i<n;i++){
            if(s[i]=='1')break;
        }
        int j=n-1;
        for( ;j>=0;j--){
            if(s[j]=='1')break;
        }
        cout<<j-i<<nl;

        
    }

    return 0;
}