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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       int ele;
        map<int,int>mp;
        for (int i = 0; i< n; i++) {
            for(int i=0;i<n;i++){
                cin>>ele;
                mp[ele]++;

            }
        }
        n--;
        int Max=n*(n+1);
        int f=1;
        for(auto ele :mp){
            if(ele.second>Max){
                f=0;
                break;
            }
        }
        if(f)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

        
    }
    return 0;
}