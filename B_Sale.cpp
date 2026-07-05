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
        sort(a.begin(),a.end());


        int sum = 0;
        for(int i=0;i<k;i++){
            if(a[i]<0){
                sum+=(-1*a[i]);
            }
            

        }
        cout<<sum<<endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}