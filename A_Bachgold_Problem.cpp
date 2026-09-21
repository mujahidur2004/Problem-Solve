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
    cin >> n;
    cout<<n/2<<nl;

    if(n%2){
        cout<<3<<" ";
        n-=3;
    }
    
    n/=2;
   for(int i=1;i<=n;i++)cout<<2<<" ";
   cout<<nl;
    

    return 0;
}