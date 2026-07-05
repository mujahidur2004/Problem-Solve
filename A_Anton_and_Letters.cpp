#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {

        // --------- Problem Logic Starts Here ---------
        string s;
        
        getline(cin,s);
        set<char>sat;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]!=',' && s[i] !=' '){
                sat.insert(s[i]);
            }

        }
        cout<<sat.size()<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}