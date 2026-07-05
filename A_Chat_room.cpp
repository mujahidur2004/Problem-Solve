#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    
        // --------- Problem Logic Starts Here ---------
        string s,Word="hello";
        int ind=0;
        cin>>s;
        for(int i=0;i<s.size() && ind<5;i++){
            if(s[i]==Word[ind]){
                ind++;
            }

        }
        if(ind==5)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}