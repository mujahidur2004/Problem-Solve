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
        int x,y, n;
        string s;
        cin >> x >> y >> n >> s;
        int ans= x+y;
        for(auto ele : s){
            if(x+y == 0) break;
            if(ele == '+'){
                if(y>0) y++;
                else {
                    y++,
                    x--;
                }

            }
            else{
                if(y>=2 || x==0){
                    y--;
                    x++;
                }
                else x--;
            }
            ans= max(ans,x+y);
        }
        cout<<ans<<nl;
        
    }

    return 0;
}