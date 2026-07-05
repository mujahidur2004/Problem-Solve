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

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int cnt=0,res=0,d=0;
        map<char,int>st;

        
       
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                res++;
            }
            else{
                d=1;
            }
            
        }
        if(s[0]!=s[n-1])res++;
        else{
            d=1;
        }
        cout<<res+d<<nl;
          

       
      

        
    }
    return 0;
}