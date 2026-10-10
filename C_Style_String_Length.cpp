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

int main()
{
    fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >>s;
        stack<char>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(st.size()==0){
                if(s[i]=='\\'){
                    st.push('\\');
                }
                else ans++;
            }
            else{
                if(st.top()=='\\'){
                    if(s[i]=='\\'){
                        ans++;
                        st.pop();
                    }
                    else{
                        st.pop();
                        break;
                    }
                }
            }
            
        }
        if(st.size()){
            cout<<"INVALID"<<nl;
        }
        else{
            cout<<ans<<nl;
        }

        
    }

    return 0;
}