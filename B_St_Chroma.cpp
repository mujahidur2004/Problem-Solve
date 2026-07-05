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
        vector<int> a;
        for (int i = 0; i < k; i++){
            a.push_back(i);
        }
        for(int i=n-1;i>=k;i--){
            a.push_back(i);
        }

       
        

        for (auto x : a) 
        cout << x <<" ";
        cout<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}