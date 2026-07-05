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
        cin>>n;
        int i=1,j=3*n,N=j;
        for(j;j>=1;j--){
            if(j%3==1){
                cout<<i<<" ";
                i++;
            }
            else{
                cout<<N<<" ";;
                N--;
            }
        }
        cout<<nl;
        
        
    }
    return 0;
}