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
    
        int n;
        cin >> n;
        int sum1=0,sum2=0;
        vector<vector<int>>v(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
                if(i==j){
                    
                    sum1+=v[i][j];
                }
                
            }
        }
        
        for(int i=0;i<n;i++){
            int j=n-1-i;
            sum2+=v[i][j];
        }
        cout<<abs(sum1-sum2)<<nl;

        
    
    return 0;
}