#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    
        // --------- Problem Logic Starts Here ---------
        int n,m,ck=0;
        cin>>n>>m;
        vector<int>v={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
        for(int i=0;i<v.size()-1;i++)
        {
            if(n==v[i]){
                if(m==v[i+1]) ck=1;
                break;
            }
        }
        if(ck)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}