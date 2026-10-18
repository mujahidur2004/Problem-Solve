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
        vector<ll> a(n);
        set<int>st;


        for (int i = 0; i < n; i++){
             cin >> a[i];
             st.insert(a[i]);
        }
        ll ans =0;
        if(st.size()==1){
            for(auto ele: st){
                ans=ele;
                
            }
        }
        else{
            for(int i =1;i< n;i++){
                if(a[i] > a[i-1]){
                    a[i-1]= (a[i]-1);
                }
                else if(a[i]<a[i-1]){
                    a[i] = (a[i-1]-1);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            ans = ans| a[i];
        }
        cout<<ans<<nl;
           

        
    }

    return 0;
}