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

    int n;
    cin >> n;

    vector<ll> a(n);
    int ele ;
    map<int,int>mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        ele=a[i];

        for(int i=2;i*i<=ele;i++){
            if(ele % i==0){
                mp[i]++;
                while(ele%i==0){
                    ele= ele/i;
                }
            }
        }
        if(ele>1)mp[ele]++;
        

    }
    
    int res = 1;
    int cnt=0;
    for(auto ele : mp){
        
        res = max(res,ele.second);
    }
    cout <<res<<nl;
   
    

    return 0;
}