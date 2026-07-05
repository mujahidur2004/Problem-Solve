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
    int temp=t;
   
    vector<pair<ll,ll>> ans;
    while (t--) {
        ll n;
        cin >> n;
        ll tem=n;
         vector<bool>visit(n+1,0);
         vector<ll>divisors;

         for(int i=2;i*i<=n ;i++){
            while(n%i==0){
                if(!visit[i]){
                    visit[i]=1;
                    divisors.push_back(i);
                }
                
                n/=i;
            }
         }
         if(n>1){
            if(!visit[n]){
                    visit[n]=1;
                    divisors.push_back(n);
                }
           

         }
         int f=1;
         int s=divisors.size();
         for(int  i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                if(__gcd(divisors[i]+divisors[j],tem)==1){
                    ans.push_back({divisors[i],divisors[j]});
                    f=0;
                    break;
                }
            }
            if(f==0)break;
         }
        if(f) ans.push_back({-1,-1});
    }
    
    for(int i=0;i<temp;i++){
        cout<<ans[i].first<<" ";
    }
    cout<<nl;
    for(int i=0;i<temp;i++){
        cout<<ans[i].second<<" ";
    }
    cout<<nl;
    


    return 0;
}