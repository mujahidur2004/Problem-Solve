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
        int n,k,even=0,flag=0;
        cin >> n>>k;
        int res=11;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]%k==0)flag=1;
            if(a[i]%2==0)even++;
            res=min(res,(k-a[i]%k));

        } 

        if(flag)cout<<0<<endl;
        else{
            if(k==4){
                if(even==0)cout<<min(2,res)<<endl;
                else if(even==1)cout<<1<<endl;
                else cout<<0<<endl;
            }
            else cout<<res<<endl;
        }
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}