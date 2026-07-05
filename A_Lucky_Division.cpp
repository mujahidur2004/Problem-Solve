#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t,ck=0 ;
    cin >> t;
    
        // --------- Problem Logic Starts Here ---------
        vector<int >v={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
        for(int i=0;i<v.size();i++){
            if(t%v[i]==0){
                ck=1;
                break;
            }

        }
        if(ck)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}