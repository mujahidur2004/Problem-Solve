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
       string n;
       cin>>n;
       int pos=n.size();
       for(int i=pos-1;i>=0;i--){
        if(n[i]-'0'>=5){
            if(i==0){
                n='1'+n;
                pos=i+1;
            }
            else {
                n[i-1]++;
                pos=i;
            }
        }
       }
       for(int j= pos;j<n.size();j++){
        n[j]='0';
       }
       cout<<n<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}