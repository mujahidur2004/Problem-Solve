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
        string s1,s2;
        cin>>s1>>s2;
        int zero1=0,zero2=0,matchnot=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='0')zero1++;
            if(s2[i]=='0')zero2++;

        }
        if(zero1!=zero2){
            cout<<-1<<nl;
            continue;
        }
        int f=1;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                continue;
            }
            int j=i+1;
            stack<char>st;
        
            for(;j<n;j++){
                st.push(s2[i]);
                if(s2[j]==s1[i]){
                    break;
                }
            }
            int k=i;
            if(j==n)continue;
            cnt++;
            reverse(s2.begin() + i, s2.begin() + j+1);
            

        }
        if(f){
            if(s1==s2)cout<<cnt<<nl;
            else cout<<-1<<nl;
        }
        else cout<<-1<<nl;

        
    }
    return 0;
}