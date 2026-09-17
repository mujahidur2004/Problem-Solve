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
        int ck =1;
        for(int i=2;i<n;i+=2){
            if(a[i-2]%2 != a[i] %2){
                ck=0;
                break;
            }
        }
        for(int i=3;i<n;i+=2){
            if(a[i-2]%2 != a[i]%2){
                ck=0;
                break;
            }
        }
        if(ck )cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

        
    }

    return 0;
}