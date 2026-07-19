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
        if(n==2){
            cout<<-1<<nl;
            
        }
        else if(n==1){
            cout<<1<<nl;
        }
        else if(n==3){
            cout<<"1 2 3"<<nl;
        }
        else if(n==4){
            cout<<"1 2 6 9"<<nl;
        }
        else{
            cout<<"1 2 6 9 ";
            ll ele=18;
            n-=4;
            while(n--){
                cout<<ele<<" ";
                ele*=2;
            }
            cout<<nl;
        }

        
    }

    return 0;
}