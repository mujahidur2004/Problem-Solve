#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    
        // --------- Problem Logic Starts Here ---------
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            char ch=tolower(s[i]);
            if(ch!='a' && ch!='o' && ch!='y' && ch!='e' && ch!='u' && ch!='i'){
                cout<<"."<<ch;
            }
        }   
        cout<<endl;
             // --------- Problem Logic Ends Here -----------
    
    return 0;
}