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
        string s,f;
        cin>>s>>f;
        int same=0,need=0,pre=0;
        for(int i=0;i<n;i++){
            if(f[i]=='1'){
                need++;
                if(s[i]=='1'){
                    same++;
                }
            }
            if(s[i]=='1')pre++;
            
        }
        need-=same;
        pre-=same;
        cout<<max(need,pre)<<endl;


        
    }
    return 0;
}