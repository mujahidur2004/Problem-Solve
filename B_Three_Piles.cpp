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
        ll a ,b,c;
        cin >>a >> b >>c;
        if(a>=b){
            cout<<a+c-b<<nl;
        }
        else{
            cout<<max(b-a,a+c-b)<<nl;
        }

        
    }

    return 0;
}