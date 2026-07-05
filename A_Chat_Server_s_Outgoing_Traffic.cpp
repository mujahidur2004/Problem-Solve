#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    
 
        // --------- Problem Logic Starts Here ---------
        string s;
        
        ll cnt=0,ans=0;
        while(getline(cin,s)){
            if(s[0]=='+')cnt++;
            else if(s[0]=='-')cnt--;
            else{
                int i;
                for(i=0;i<s.size();i++){
                    if(s[i]==':')break;

                }
                int byte=s.size()-i-1;
                ans+=(cnt*byte);
            }
            


        }
        cout<<ans<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}