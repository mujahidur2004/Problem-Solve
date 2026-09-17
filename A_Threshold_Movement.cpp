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

        for (int i = 0; i < n; i++)
            cin >> a[i];

        if(n==1){
            cout<<"NO"<<nl;
            continue;
        }
        ll y = a[0]-1;
        ll x =0;
        
        if(x>y){
            cout<<"NO"<<nl;
            continue;
                
                
            }
        bool f=1;
        for(int i=1;i<n;i++){
            
            if(a[i]>=y){
                y=a[i]-1;
            }
            if(a[i]<=x){
                x=a[i]+1;
            }
            

            if(x>y){
                f=0;
                break;
            }
        }
        if(f)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

    return 0;
}