#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
        // --------- Problem Logic Starts Here ---------
        int n;
        int one=0,two=0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]==100)one++;
            else two++;
        } 
        if(two%2==1 &&  one<2){
            cout<<"NO"<<endl;
            return 0;
        }
        two=two%2;
        one+=(two*2);
        if(one%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

        
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}