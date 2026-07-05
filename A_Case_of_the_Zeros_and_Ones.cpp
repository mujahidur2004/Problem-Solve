#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
        // --------- Problem Logic Starts Here ---------
        int n;
        cin >> n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') {
                cnt++;

            }

        }
        cout<<n-(2*(min(cnt,n-cnt)))<<endl;;
        // --------- Problem Logic Ends Here -----------
   
    return 0;
}



















