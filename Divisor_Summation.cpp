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
        ll n;
        cin >> n;
        ll sum =1;
        if(n == 1) { cout << 0 << nl; continue; }
        for(int i=2;i*i<=n;i++){
            if(n%i==0 && i*i ==n){
                sum+=i;
            }
            else if(n%i==0){
                sum+=i;
                sum+=n/i;
            }
        }
        cout<<sum<<nl;
        

        
    }

    return 0;
}