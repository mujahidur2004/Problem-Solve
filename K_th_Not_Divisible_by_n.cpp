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
        int n ,k;
        cin >> n >>k;
        if(n==k){
            cout<<n+1<<nl;
            continue;
        }
        int slotneeds= ((k-1 )/ (n-1));
        int ans =( n * slotneeds);
        if(slotneeds==0){
            ans+=k;
        }
        else{
            ans+= k % slotneeds;

        }
        
        if(slotneeds !=0){
            if(k % slotneeds == 0){
            ans -= 1;
        }

        }
        
        cout<<ans<<nl;

        
    }

    return 0;
}