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
        int n;
        cin >> n;
        vector<char> a(n);
        int cnt=0,f=0;
        
        for (int i = 0; i < n; i++) cin >> a[i];
        
        for(int i=0;i<n;i++){
            if(a[i]=='(') cnt++;
            else if( a[i]==')' &&cnt>0){
                cnt--;
            }
            else {
                f++;
            }
        }
        cout<<f<<endl;

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}