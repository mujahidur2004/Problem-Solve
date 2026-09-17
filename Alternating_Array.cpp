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
//Accepted
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

        int cnt1=0;
        for(int i=0;i<n;i++){
            if((i+1)%2!= a[i]%2)cnt1++;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if((i)%2!= a[i]%2)cnt++;
        }
        cout<<min(cnt,cnt1)<<nl;
    }

    return 0;
}
