#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
   
        // --------- Problem Logic Starts Here ---------
        string s;
        cin>>s;
        int ck=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
                ck=1;
                break;

            }
        }
        if(ck)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}