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

        int reamin = a[0]-1,f=1;
        for(int i=0;i+1<n;i++){
            if(a[i]==i+1){
                continue;
            }
            if(a[i]<i+1){
                f=0;
                break;
            }
            else{
               a[i+1] += a[i] - (i + 1);
            }
        }
        if(a[n-1]<n)f=0;
        if(f)cout<<"YES\n";
        else cout<<"NO"<<nl;
        
    }

    return 0;
}