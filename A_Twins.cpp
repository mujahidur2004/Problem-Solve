#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    
        // --------- Problem Logic Starts Here ---------
        int n,sum=0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            sum+=a[i];

        } 
        sort(a.begin(),a.end());
        double coin=a[n-1],res=1;
        for(int j=n-2;j>=0;j--){
            if(coin<=sum-coin){
                res++;
                coin+=a[j];
            }
            else break;
        }
        cout<<res<<endl;

  
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}