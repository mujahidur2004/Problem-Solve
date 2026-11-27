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
        int n , k ,p;
        cin >> n >> k >> p;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        
            sort(a.begin(),a.end());
            ll sum =0;
            for(int i=0;i<n;i++){
                ll tems=0;
                if(i+k<=n){
                    for(int j=i;j<i+k;j++){
                        tems+= a[j];
                    }
                    if(tems<= p){
                    i+=(k-1);
                    sum+=p;
                }
                else {
                    i+=(k-1);
                    sum+=tems;

                }
                
                }
                else sum+= a[i];
                
    
            }
            cout<<sum<<nl;

        
    }

    return 0;
}