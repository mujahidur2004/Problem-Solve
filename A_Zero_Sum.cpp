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
        if(n%2==1){
            cout << "NO" <<nl;
            continue;
        }

        ll f = 1,cnt1=0,cnt2=0;
        for(int i = 0; i < n; i+=2){
            if(a[i]==a[i+1]){
                if(a[i]==1)cnt1++;
                else cnt2++;
            }

        }
        ll c=max(cnt1,cnt2),b=min(cnt1,cnt2);
        if((c - b)%2==0){
            cout<<"YES"<<nl;

        }
        else cout<<"NO"<<nl;
    }

    return 0;
}