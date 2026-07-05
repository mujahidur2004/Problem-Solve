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
        int n,high,low,res=0;
        cin >> n>>low>>high;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int f=0;
        if(a[0]<low){
            res++;
            f=1;
        }

        for(int i=1;i<n;i++){
            if(a[i]<low && !f){
                f=1;
                res++;
            }
            if(a[i]>high){
                f=0;
            }
            
        }
        cout<<res<<endl;

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}