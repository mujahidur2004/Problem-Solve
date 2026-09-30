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
        ll ans =0;

        for (int i = 0; i < n; i++){
            cin >> s;
            for(int i=0;i<s.size();i++){
                ans+=s[i]-'0';
            }

        }
        if(ans%3==0){
            cout<<"Yes"<<nl;

        }
        else {
            cout<< "No"<<nl;
        }
            


        
    }

    return 0;
}