#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    
    
        // --------- Problem Logic Starts Here ---------
        int n,a,b;
        cin >> n;
        set <int>st;
        cin>>a;
        while(a--){
            int ele;
            cin>>ele;
            st.insert(ele);
        }
        cin>>b;
        while(b--){
            int ele;
            cin>>ele;
            st.insert(ele);
        }
        if(st.size()==n){
            cout<<"I become the guy."<<endl;

        }
        else cout<<"Oh, my keyboard!"<<endl;
        

        
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}