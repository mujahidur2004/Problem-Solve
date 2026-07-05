#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
int main() {
    fast_io;
    int t ;
    cin >> t;
    int ok=0;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n,m,h;
        cin >> n>>m>>h;
        vector<ll> a(n),temp(n);
        vector<pair<ll,ll>>P;
        for (int i = 0; i < n; i++)
        cin >> a[i];
        temp=a;
        unordered_set<int>st;
        for(int i=1;i<=m;i++){
            int ele1,ele2;
            cin>>ele1>>ele2;
            
            if(temp[ele1-1]+ele2<=h){
            temp[ele1-1]+=ele2;
            ok=1;
            st.insert(ele1-1);
            }
            
            else{
              
            ok=0;
            for(auto it:st){
              temp[it]=a[it];
            }
            st.clear();
            }
            
        }
        
        
       
       for(auto it:temp)cout<<it<<" ";
    
       
        
        cout<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}