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
    int needed[10001+10];
    for(int i=2;i<= 10001+10;i = i* 2){
        needed[i+2]=1;
    }
    needed[2]=1;
    for(int i=1;i<= 10001+10;i++){
        //needed[i]= (needed[i-1]+needed[i]);
        cout<<i<<" "<<needed[i]<<" "<<nl;
    }
    

    // int n;
    // cin >> n;
    // int tc=1;
    // while( n!= -1){
    //     int ans =0;
    //     n--;
    //     int sum=0;
    //     for(int i=1;i <= n;i*=2 ){
    //         ans++;

    //     }
    //     cout<<"Case "<<tc<<": "<<ans<<nl;
    //     cin>> n;
    //     tc++;



    // }


    
    

    return 0;
}