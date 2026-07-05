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
void recursion(int n){
    
   
    if(n==0){
        
        return;

    } 
    recursion(n/10);
    cout<<n%10<<" ";
    
     
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n==0){
            cout<<0<<nl;
            continue;
        }
       recursion(n);

       cout<<nl;
       
        
    }
    return 0;
}