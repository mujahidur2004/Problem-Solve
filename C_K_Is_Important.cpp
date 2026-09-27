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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        ll ans = 0;
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        vector<int> temp;
        for(int i=0;i<n;i++) {
            if(i>=k-1 && i<=n-k) ans+=a[i];
            else temp.push_back(a[i]);
        }
        int i=k-1,j=temp.size()-k;
        for(;i<temp.size();i++,j--) {
 
            ans+=max(temp[i],temp[j]);
        }
        cout<<ans<<endl;
    }

    return 0;
}