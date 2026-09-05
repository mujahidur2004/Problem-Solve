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

        vector<int>Zero;

        for (int i = 0; i < n; i++){
             cin >> a[i];
             if(a[i]==0){
                Zero.push_back(i);
             }
             
        }
         
        int ck=1;
        if(Zero.size()>=2 && Zero.size()!=n){
            cout<<"YES"<<nl;
            for(int i=0;i<n;i++){
                if(a[i]== 0 && ck ){
                    cout<<"A";
                    ck=0;
                }
                else if(a[i]==0){
                    cout<<"B";
                }
                else cout<<"C";
            }
            
           
            
            cout<<nl;
            
            
        }
        else if(Zero.size()==0 || Zero.size()==n){
            cout<<"YES"<<nl;
            cout<<"BC";
            for(int i=2;i<n;i++){
                cout<<"A";
            }
            cout<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
           

        
    }

   
}