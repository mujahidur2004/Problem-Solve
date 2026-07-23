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
        n--;
       long long msb = log2(n);
       vector<ll>ans;
       long long num = pow(2, msb) - 1;
       for(int i=num;i>=0;i--){
        ans.push_back(i);
       }
       for(int i=num+1;i<=n;i++){
        ans.push_back(i);

       }
       for(auto ele : ans){
        cout<<ele<<" ";
       }
       cout<<nl;

       
        

        
    }

    return 0;
}