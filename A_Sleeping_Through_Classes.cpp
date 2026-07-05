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
        int n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        int cnt =0;
        for(int i=0;i<n;){
            if(s[i]=='0'){
                cnt++;
                i++;
            }

            else{
                int j=i+1;
                for(;j<n;j++)
                {
                    if(s[j]=='1')break;


                }
                i=min(j,(i+k+1));

            }
            
        }
        cout<<cnt<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}