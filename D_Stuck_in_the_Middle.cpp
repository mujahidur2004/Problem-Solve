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
    //fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s1,s;
        cin >> s1;
        s ="0";
        s+=s1;
        map<char,int>mp;
        for(int i=1;i<=n;i++) mp[s[i]]++;
        
        
        int cnt=1;
        if(n<=2){
            cout<<"YES"<<nl;
            continue;
        }
        for(int i=2;i<=n;i++){
            if(s[i] != s[i-1])cnt++;
        }
        if(cnt==1){
            cout<<"YES"<<nl;
        }
        else if(cnt==2){
           cout<<"YES"<<nl;
           

        }
        else if(cnt==3){
            int ck=1;
            for(int i= 3;i< n;i++){
                if(s[i] != s[i-1])ck=0;

            }
            if(ck  && n > 3)cout<<"YES"<<nl;
            else cout<<"NO"<<nl;

            
        }
        else{
            cout<<"NO"<<nl;

        }
       

        
    }

    return 0;
}