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
long long solve(long long n)
{
    if(n == 1)
        return 0;

    return 1 + solve(n / 2);
}
int main() {
    fast_io;

   ll n;
   cin>>n;
   cout<<solve(n)<<nl;
    return 0;
}