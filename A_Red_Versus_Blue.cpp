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
        int n, b, r;
        cin >> n >> b >> r;
        int remain = b % (r + 1);
        int total = b / (r+1);
        string ans = "";
        for(int i = 1 ;i <= r ;i++ ) {

            for(int  j =0 ;j < total ;j++){
                ans+='R';
            }
            if(remain){
                ans+='R';
                remain--;
            }
            ans+='B';
        }
        for(int  j =0 ;j < total ;j++){
                ans+='R';
            }
        cout<<ans<<nl;
    }
    return 0;
}