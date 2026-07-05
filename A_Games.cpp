#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    
        // --------- Problem Logic Starts Here ---------
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            cin>>b[i];
        } 
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(a[i]==b[j]) res++;
            }
        }

        
        cout << res<< endl;
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}