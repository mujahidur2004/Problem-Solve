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

    int n, l;
    cin >> n >> l;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll low = 0, high = 1e9 ;
    double  ans = 1e9+1;
    while(low <= high){
        double mid = low + (high - low) / 2.0;
        bool f = 1;
        for(int i = 1 ; i < n; i++){
            if(a[i] - a[i - 1] < 2.00 * mid){
                f = 0;
            }
        } 
        if( f ) {
            ans= min(ans,mid * 1.00);
            high = mid;
        }
        else {
            low = mid;
        }
    }


    return 0;
}