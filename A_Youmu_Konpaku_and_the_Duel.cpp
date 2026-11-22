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
        int n;
        cin >> n;
        if(n<=2){
            cout<< n<<nl;
            continue;
        }
        //cout<<n<<" ";
        int ans = INT_MAX;

        for (int i = 2; i <= n; i++)
        {
            if ((i * (i + 1) / 2LL) < n)
                continue;
            ;
            //cout << i << " ";
            int j=i-1;
            int tans = j;
            int temn=n;
            //cout<<temn<<" "<<tans<< " ";
            while (temn > 0)
            {
                tans++;
                 //cout<<temn<<" ";
                temn= temn-j;
                j--;
                
            }
            //cout<< tans<<" ";
            ans= min(ans,tans);
        }

        cout << ans-1 << nl;
    }

    return 0;
}