/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
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
        int n, c;
        cin >> n >> c;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        
        
        sort(a.begin(),a.end());
        ll sum=0;
        int i=0 , l=n-1;
        while(i<l && a[i]<=c){
            sum+=(a[l]-c);
            i++;
            l--;
        }
        while(i<=l){
            sum+=(a[i]-c);
            i++;

        }
        cout<<sum<<nl;
        
        
    }

    return 0;
}