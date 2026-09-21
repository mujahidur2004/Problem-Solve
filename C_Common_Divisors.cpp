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

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll GCD=a[0];
    for(int i=1;i<n;i++){
        GCD =  gcd(GCD,a[i]);
    }
    //cout<<GCD<<" ";
    int ans =0;
    for(ll i =1;i*i <= GCD;i++){
        if(GCD % i == 0){
            if(i*i==GCD) ans++;
            else ans+=2;
        }
    }
    cout<<ans<<nl;
    

    return 0;
}