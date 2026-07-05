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
        int one=0,two=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')one++;
        }
        two=n-one;
        while(k--){
            if(one>two){
                one-=2;
            }
            else{
                two-=2;
            }
        }
        if(one==two){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;


        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}