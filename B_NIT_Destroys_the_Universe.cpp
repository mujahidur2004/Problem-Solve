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
        vector<int> a;
        
        int cnt=0,fl=0;
        for (int i = 0; i < n; i++){
            int ele;
            cin>>ele;
            if(ele==0){
                cnt++;
            }
            a.push_back(ele);


        } 
        int i=0,j=n-1;
        for( ; i<n;i++){
            if(a[i]!=0)break;
        }
        for( ; j>=0;j--){
            if(a[j]!=0)break;
        }
        for(i;i<=j;i++){
            if(a[i]==0){
                fl=1;
                break;
            }
        }
        if(cnt==n)cout<<0<<endl;
        else if(fl)cout<<2<<endl;
        else cout<<1<<endl;

        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}