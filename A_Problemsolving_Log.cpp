#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n,cnt=0,endtime=0;
        cin >> n;
        string s;
        map<char,int>mp;
        cin>>s;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto ele :mp){
            int time=ele.first-'A'+1;
           
            if( time<=ele.second){
                cnt++;
                
               
            
            } 
            

        }
        cout<<cnt<<endl;

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}