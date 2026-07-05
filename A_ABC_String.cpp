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
        string s;
        cin>>s;
        int a=0,b=0,c=0,n=s.size();
        if(s[0]==s[n-1]){
            cout<<"NO"<<nl;
            continue;
        }
        
        stack<char>st;
        int f=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[0]){
                st.push('(');
            }
            else {
                if(st.size()) st.pop();
                else {
                    st.push('(');
                    break;

                }
            }

        }
        if(!st.size()) f=1;\
        stack<char>st1;
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-1]){
                st1.push('(');
            }
            else {
                if(st1.size()) st1.pop();
                else{
                    st1.push('(');
                    break;

                } 
            }
        }
        if(!st1.size()) f=1;
        if(f)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;


        

        
    }
    return 0;
}