/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
//Accepted
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
        string s;
        cin >> s;
        int f=0,c=0;
        for(int i=-1;i<n;i++){
            if(s[i]=='z'){
                f=i;
                break;
            }
        }
        for(int i=f;i<n;i++){
            if(s[i]!='z'){
                break;
            }
            else s[i]='a';
        }
        cout<<s<<nl;


        
    }

    return 0;
}