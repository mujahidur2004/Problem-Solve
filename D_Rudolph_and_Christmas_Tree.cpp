#include <bits/stdc++.h>
#define ll long long int
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

double solve(ll n, long double b, long double h, long double a[])
{
    long double ans = 0;

    ans += (b*h)/2.0;
    for(ll i=0; i<n-1; i++)
    {
        if(a[i+1] < a[i]+h)
        {
            long double k = (a[i]+h - a[i+1])/h;
            long double bTop = k*b;
            long double h2 = a[i+1]-a[i];
            long double area = h2*(bTop+b)/2.0;
            ans += area;
        }
        else
        {
            ans += (b*h)/2.0;
        }
    }

    return ans;
}

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        long double b,h;
        cin >> n >> b >> h;
        long double a[n];
        for(ll i=0; i<n; i++) cin >> a[i];

        cout << fixed << setprecision(10) << solve(n,b,h,a) << "\n";
    }

    return 0;
}