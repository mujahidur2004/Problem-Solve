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

    int x ,y ,f;
    cin >>x >>y >>f;
    int res1=12*x;
    int res2= (12 * y )+f;
    cout<<min(res1,res2)<<nl;

    

    return 0;
}