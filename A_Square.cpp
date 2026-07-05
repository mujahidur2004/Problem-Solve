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
       vector<int>x,y;
       int n=4;
       while(n--){
        int a,b;

        cin>>a>>b;
        x.push_back(a);
         y.push_back(b);

       }
       sort(x.begin(),x.end());
       sort(y.begin(),y.end());
       int res=((abs(x[0]-x[3]))*(abs(y[0]-y[3])));
       cout<<res<<endl;
    
      
    }
    return 0;
}