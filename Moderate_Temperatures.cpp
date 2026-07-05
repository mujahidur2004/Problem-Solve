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
       vector<int>s;
        int ele;
        for (int i = 0; i< n; i++) {
            cin>>ele;
            s.push_back(ele);
        }
        sort(s.begin(),s.end());
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]!= s[0] && s[i]!=s[n-1]){
                res++;
            }
        }
        cout<<res<<nl;

        
    }
    return 0;
}