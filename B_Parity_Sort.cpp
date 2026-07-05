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
        int n,flag=1;
        cin >> n;
        vector<int> a(n),b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        for (int i = 0; i < n; i++) {
            if((b[i]%2)==1){
                if((a[i]%2)==0){
                    flag=0;
                    break;

                }

            }
            else{
                if((a[i]%2)==1){
                    flag=0;
                    break;

                }
                
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


       
        
        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}