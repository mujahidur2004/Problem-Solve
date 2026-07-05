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

int main() {
    fast_io;

    
        int n;
        cin >> n;
        map<int,int>mp;
        int ele;
        for (int i = 0; i+1< n; i++) {
            cin>>ele;
            mp[ele]++;

            
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
                cout<<i<<nl;
                break;
            }
        }

        
    
    return 0;
}