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
        cin >>s;
        if(s[0]=='1'){
            int res=0;
            for(int i=0;i<n;i++){
                if(s[i]=='0')res++;
            }
            cout<<res<<nl;
        }
        else{
            int i=0;
            for( ; i<n;i++){
                if(s[i]=='1')break;
            }
            int j=n-1;
            for(;j>=0;j--){
                if(s[j]=='0')break;
            }
            if(i>j){
                cout<<0<<nl;
                continue;
            }
            vector<int>Zerocnt(n+2,0),onecnt(n+2,0);
            for(int k=i;k<=j;k++){
                onecnt[k]=onecnt[k-1];
                if(s[k]=='1')onecnt[k]++;
            }
            for(int k=j;k>=i;k--){
                Zerocnt[k]=Zerocnt[k+1];
                if(s[k]=='0')Zerocnt[k]++;
            }
            int res = INT_MAX;
            for(int k=i;k<=j;k++){
                int cur= onecnt[k-1]+Zerocnt[k+1];
                res=min(res,cur);
            }
            cout<<res<<nl;
        }
       

        
    }

    return 0;
}