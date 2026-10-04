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
        if(n==1){
            cout<<"2 3 6\n";
        }
        else if(n==2){
            cout<<"1 2 2"<<nl;
        }
        else if(n==3){
            cout<<"1 1 1"<<nl;
        }
        else cout<<-1<<nl;
        

        
    }

    return 0;
}