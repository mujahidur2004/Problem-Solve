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
        ll a, b;
        cin >> a >> b;
        int ans = INT_MAX;
        for(int i=0;i<32;i++){
            int ca=a;
            int nb=b+i;
            int cnt=i;
            if(nb==1)
                continue;
            while(ca>0){
                ca/=nb;
                cnt++;
            }
            ans=min(ans,cnt);
        }
        cout<<ans<<nl;
    }

    return 0;
}