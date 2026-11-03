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
        int n , m;
        cin >> n >> m;
        string s, sa;
        cin >> s >> sa;
        map<char, int> mp;
        for(int i=0;i< n;i++){
            mp[s[i]]++;
        }
        for(int i =0;i<m ;i++){
            mp[sa[i]]--;
        }
        int ck=1;
        if(mp['s'] != 1 || mp['i'] != 1 || mp['x'] != 1)
            ck = 0;

        for(auto ele : mp){
            if(ele.first != 's' &&
               ele.first != 'i' &&
               ele.first != 'x'){
                if(ele.second != 0)
                    ck = 0;
            }
        }
        if(ck ){
            cout<<"YES"<<nl;
           
        }
        else cout<<"NO"<<nl;

        
    }

    return 0;
}