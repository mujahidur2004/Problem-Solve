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
        int n , x;
        cin >> n >> x;
        
        vector<int> a(n);
        map<int,int>mp,mp2;
        ll ans =0;

        for (int i = 0; i < n; i++){
             cin >> a[i];
             if(a[i]%x==0){
                ans+=a[i];
                continue;
             }
             mp[a[i]]++;
        }
           
            
        if(x==1){
            cout<<0<<nl;
            continue;
        }
        int maxadd =0;
        for(auto ele :mp){
            int f = ele.first,s=ele.second;
            for(int i=2;i*i <=f;i++){
                
                if(f%i==0){
                    mp2[i]+=(s);
                    
                        mp2[f/i]+=s;
                    
                    
                }

            }
            mp2[f]+=s;
            
        }
        for(auto ele :mp2){
            int gd=gcd(x,ele.first);
            if(gd !=1){
                int ad = mp2[gd] * ele.first;
                maxadd=max(maxadd,ad);

            }
        }

       
        cout<<ans+maxadd<<nl;

        
    }

    return 0;
}