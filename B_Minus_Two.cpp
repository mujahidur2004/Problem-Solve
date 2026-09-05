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
        int cnt1=0,cnt2=0,cnt3=0;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]%2){
                cnt1++;
            }
            else {
                a[i]/=2;
                if(a[i]%2==0){
                    cnt2++;
                }
                else cnt3++;

            }
        }
        int ans =max(cnt1,cnt2);
        ans=max(ans,cnt3);
        cout<<ans<<nl;
            

        
    }

    return 0;
}