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

        for(int i=0;i<n;i++){
            int cnt1=0,cnt2=0;
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j])cnt1++;
                else if(a[i]<a[j])cnt2++;
            }
            cout<<max(cnt1,cnt2)<<" ";
        }
        cout<<nl;
    }

    return 0;
}