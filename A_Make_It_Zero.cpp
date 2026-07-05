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
        int n,flag=0;
        cin >> n;
        set<int> a;
        vector<int>V;
        for (int i = 0; i < n; i++){
            ll ele;
            cin>>ele;
            V.push_back(ele);
            if(ele==0)flag=1;
           
        


        } 
        if(n%2==0){
            
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;

        }
        else{
            cout<<4<<endl;
             cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
             cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
        
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}