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
        vector<ll> a,b;
        int ele;
        int sum=0;
        for (int i = 0; i< n; i++) {
            cin>>ele;
            if(ele>=0){
                a.push_back(ele);
                sum+=ele;
            }
            else b.push_back(ele);
        }
        int ans=a.size();
        if(ans==0){
            cout<<0<<nl;
            continue;
        }
        else{
            sort(b.begin(),b.end());
            for(int i=b.size()-1;i>=0;i--){
                if(sum+b[i]>=0){
                    ans++;
                    sum+=b[i];
                }
                else{
                    break;
                }
            }
            cout<<ans<<nl;
        }


        
    }
    return 0;
}