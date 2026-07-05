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
        vector<int> a(n+1,0),ans(n+1,0);
        

        for (int i = 1; i<= n; i++) {
            cin >> a[i];
            
        }
        for(int i=1;i<=n;i++){
            if(a[i]==0)continue;
            for(int j=1;j<=a[i] ;j++){
                if(a[i]==0)
                ans[i+j]=ans[i+j]+1;
                a[i+j]=max(0,(a[i+j]-1));
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<nl;

        
    }
    return 0;
}