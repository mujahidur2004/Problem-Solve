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
        int n;
        cin >> n;
        string s;
        cin >>s;
        vector<int> v(n+1);
        int i=1;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                st.push(i+1);
            }
            else if(s[i]=='2'){
                if(st.size()==0){
                    v[i+1]=1;
                }
                else{
                     int last =st.top();
                     v[last]=1;
                     st.pop();
                }
            }
            else{
                v[i+1]=1;
            }
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(!v[i]) ans.push_back(i);
        }
        cout<<ans.size()<<nl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<nl;
        
    }

    return 0;
}