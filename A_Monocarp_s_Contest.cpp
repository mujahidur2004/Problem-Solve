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

        int ind1 =-1;
        int j = -1;
        for(int i=0;i<n;i++){
            if(a[i]== 0){
                ind1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==0){
                j=i;
                break;
            }
        }
        if(ind1 == -1 || j== -1 || ind1==j){
            cout<<-1<<endl;
            continue;
        }
        if(ind1==0 && j==n-1){
            cout<<0<<nl;
        }
        else if(ind1==0 || j==n-1){
            cout<<1<<nl;
        }
        else cout<<2<<nl;

    }

    return 0;
}