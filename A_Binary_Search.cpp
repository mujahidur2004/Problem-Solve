#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
        // --------- Problem Logic Starts Here ---------
        int n,k;
        cin >> n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        while(k--){
            int ele;
            cin>>ele;
            int low=0,f=0,high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(a[mid]==ele){
                    f=1;
                    break;
                }
                if(a[mid]<ele){
                    low=mid+1;

                }
                else{
                    high=mid-1;
                }
            }
            if(f)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}