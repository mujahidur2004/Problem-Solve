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
        cin >>n;
        char c;
        cin >>c;
        string s;
        cin >>s;
        int cnt=0;

        for (int i = 0; i < n/2; i++)
            {
                if(s[i]!=s[n-i-1]){
                    if(s[i]==c || s[n-i-1]==c){
                        cnt++;
                    }
                    else cnt+=2;
                }
            }
            cout<<cnt<<nl;

        
    }

    return 0;
}