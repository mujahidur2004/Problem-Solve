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

    int n;
    n= 10001+10;

    vector<ll> a(n);
    for (int i = 1; i < n; i *= 2){
        a[i+1] = 1;
        //cout<<i<<" "<<a[i+1]<<nl;

    }
    for(int i=1;i<n;i++){
        a[i]= (a[i-1]+ a[i]);
       // cout<<i<<nl;
    }
        
    int tc =1;
    int y;
    cin>>y;
    while(y > 0 ){
        cout<<"Case "<<tc<<": ";
        cout<<a[y]<<nl;
        cin >>y;
        tc++;
        if(tc>2000 ) break;
    }
    

    return 0;
}