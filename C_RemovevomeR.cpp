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
        stack<char>st;
        string s;
        cin>>s;
        
        for(int i=0;i<n;i++){
            if(!st.size()){
                st.push(s[i]);
            }
            else{
                if(st.top()!=s[i])st.push(s[i]);
            }
        }
        if(st.size()==2){
            cout<<2<<nl;
        }
        else cout<<1<<nl;
        
    }
    return 0;
}