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
        n*=2;
        n++;
        vector<ll> a(n);

        for (int i = 1; i< n; i++) {
            cin >> a[i];
        }
        int z1=-1,z2=-1;
        for(int i=1;i<n;i++){
            if(a[i]==0 && z1==-1) z1=i;
            else if(a[i]==0) z2=i;
            
        }
        //cout<<z1<<z2<<nl;
        set<int>st;
        int tm1=z1,tm2=z2,f=1;

        while(tm1<=tm2){
            if(a[tm1]!=a[tm2]){
                f=0;
                break;
            }
            st.insert(a[tm1]);
            tm1++,tm2--;

        }
        tm1=z1,tm2=z2;
        int res=0;
        if(f){
            while(tm1>0 && tm2<n){
                 if(a[tm1]!=a[tm2]){
                f=0;
                break;
            }
            st.insert(a[tm1]);
            tm1--,tm2++;
                
            }
            for(auto ele:st){
            if(res==ele)res++;
        }

        }
        
        
        int i=0;
        st.clear();
        tm1=z1;
        while(tm1-i>0 && tm1+i<n){
            if(a[tm1-i]!=a[tm1+i]){
                break;
            }
            st.insert(a[tm1-i]);
            i++;
        }
        i=0;
        for(auto ele :st){
            if(i==ele)i++;
        }
         res=max(i,res);
        i=0;
        st.clear();
        tm2=z2;
        while(tm2-i>0 && tm2+i<n){
            if(a[tm2-i]!=a[tm2+i]){
                break;
            }
            st.insert(a[tm2-i]);   
            i++;
        }
        i=0;
        for(auto ele :st){
            if(i==ele)i++;
        }
        res=max(i,res);
        cout<<res<<nl;



        
    }
    return 0;
}