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
    set<int>st;
    int t;
    cin >> t;
    while (t--) {
        
        int x,y;
        cin>>x>>y;
        if(x==1){
            st.insert(y);

        }
        else if(x==2){
            st.erase(y);
        }
        else{
            if(st.find(y)==st.end()){
                cout<<"No"<<nl;
            }
            else{
                cout<<"Yes"<<nl;
            }
        }

        
    }
    return 0;
}