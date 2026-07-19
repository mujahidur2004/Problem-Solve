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
        int n , k , s;
        cin >> n >> k >> s;
        if(s < k)
        {
            cout<<"NO"<<nl;
            continue;
        }
        cout<<"YES"<<nl;
        int remain  = s%k, ans=s/k;
        for(int i=0;i<n;i++){
            if(k){
                if(remain){
                    cout<<ans+1<< " ";
                    remain--;
                    k--;
                }
                else{
                    cout<<ans<< " ";
                }
            }
            else cout<<1<<" ";
        }
        cout<<nl;

        
    }

    return 0;
}