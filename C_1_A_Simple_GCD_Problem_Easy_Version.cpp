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
ll lcm(ll a,ll b){
    return a / gcd(a,b)*b;
}
int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        a[0]=gcd(a[0],a[1]);
        a[n-1]=gcd(a[n-1],a[n-2]);
        for(int i=1;i<n-1;i++){
            a[i]=lcm(gcd(a[i],a[i-1]),gcd(a[i],a[i+1]));
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i])res++;
        }
        cout<<res<<nl;

        
    }

    return 0;
}