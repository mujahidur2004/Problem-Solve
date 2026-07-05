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
        int a,b,x;
        cin>>a>>b>>x;
        if(a==b){
            cout<<0<<nl;
            continue;
        }
        vector<int>res1,res2;
        res1.push_back(a);
        
         res2.push_back(b);
        
        int ans=max(a,b)-min(a,b);
        int y=a;
        while(y){
            y/=x;
            res1.push_back(y);
        }
        y=b;
         while(y){
            y/=x;
            res2.push_back(y);
        }
        int temres;
        for(int i=0;i<res1.size();i++){
            for(int j=0;j<res2.size();j++){
                temres=(i+j)+((max(res1[i],res2[j])-(min(res1[i],res2[j]))));
                ans=min(ans,temres);

            }
        }
        cout<<ans<<nl;



        
    }
    return 0;
}