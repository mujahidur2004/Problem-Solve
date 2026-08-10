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
    vector<int>div(1e6+100,0);
    for(int i=2;i<1e6+10;i++){
        if(div[i]==0){
            for(int j=i;j<1e6+10;j=j+i){
            div[j]++;
        }

        }
        
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout<<div[n];

        
    }
    return 0;
}