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
        int n,k;
        cin >> n >>k;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        ll ans =0;
        if(n==k){
            cout<<max(a[0],a[n-1])<<nl;
            continue;
        }
        int i= k-1,j=n-k;
        int cnt=0;
        while(i<=j){
            cnt++;
            if(a[i]>=a[j]){
                ans+=a[i];
                //cout<<a[i]<<" ";
                i++;
            }
            else{
                ans+= a[j];
                //cout<<a[j]<<" ";
                j--;
            }
        }
        vector<int>rem;
        for(int i=0;i<k-1;i++){
            rem.push_back(a[i]);
        }
        for(int i=n-k+1;i<n;i++){
             rem.push_back(a[i]);
        }
        
        int i=k-1, j=
        cout<<rem.size()<<nl;
        //cout<<ans<<nl;

        
    }

    return 0;
}