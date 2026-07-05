#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
        // --------- Problem Logic Starts Here ---------
        int n,k,cnt=0;
        cin >> n>>k;
        vector<int> a;
        for (int i = 0; i < n; i++){
            int ele;
            cin>>ele;
            if(5-ele>=k){
                cnt++;
            }

        } 

        
        cout << cnt/3 << endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}