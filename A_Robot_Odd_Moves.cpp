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
        int k;
        cin >> k;
        int f=1;
        if(k>n+1)f=0;
        if(!f){
            cout<<-1<<nl;
        }
        else{
            if(n==k){
                cout<<n<<nl;
            }
            else if(n<k){
                cout<<k<<nl;
            }
            
            else if(n%2==k%2){
                cout<<max(n,k)<<nl;

            }
            else{
                cout<<max(n,k)+1<<nl;
            }
        }
    }

    return 0;
}