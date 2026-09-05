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
        int  ck1=-1,ck2=-1;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(ck1==-1){
                if(a[i]!=0)ck1=i;
            }
            
        }
        for(int i=n-1;i>=0;i--){
            if(ck2==-1){
                if(a[i]!=0){
                    ck2=i;
                }
            }
        }
        if(ck1!=-1){
            a[ck1]=1;
        }
        if(ck2!=-1){
            a[ck2]=1;
        }
        for(int i=0;i<n;i++){
            if(a[i]==-1){
                cout<<0<<" ";
            }
            else 
            cout<<a[i]<<" ";
        }
        cout<<nl;
            

        
    }

    return 0;
}