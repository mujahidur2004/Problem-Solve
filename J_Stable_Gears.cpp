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
        unsigned long long n;
        cin >> n;
        unsigned long long ans =  n * n;
         if(n==1){
            cout<<0<<nl;
            continue;
         }
        cout<<( (ans-2)/4 )+1 <<nl;
       // cout<< (2+(ans-1)*4)<<nl;

        
    }

    return 0;
}