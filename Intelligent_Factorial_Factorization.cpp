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
    for(int k=1;k<=t;k++){
        int n;
        cin >> n;
         vector<ll> power(110,0);
        set<int>st;
         
        

        for (int j = 2; j<=n; j++) {
            
            int jl=j;
           for(int i=2;i<=j;i++){
                ll value=0;
                while(jl%i==0){
                    value++;
                    jl/=i;

                }
                if(value!=0){
                    
                    st.insert(i);
                    power[i]+=value;
                   
                }
           }
           if(jl!=1){
            st.insert(jl);
            power[jl]+=1;
            

        }
    }
    cout<<"Case "<<k<<": "<<n<<" = ";
    int cnt=1,s=st.size();
    for(auto ele :st){
        if(cnt==s){
            cout<<ele<<" ("<<power[ele]<<") ";
        }
        else{
            cout<<ele<<" ("<<power[ele]<<") * ";
        }
        cnt++;
        
    }
    cout<<nl;

        
    }
    return 0;
}