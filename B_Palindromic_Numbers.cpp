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
        int num;
        cin >>num;
        string s;
        s=to_string(num);
        
        
        if(s[0]=='9'){
            
            int number=0;
             for(int i=0;i<=n;i++){
                number=(number*10 +1);
                
             }
             
             cout<<number-num<<nl;

        }
        else{
            for(int i=0;i<n;i++){
                int ele =s[i]-'0';
                cout<<9-ele;
            }
            cout<<nl;

        }
        
        
    }

    return 0;
}