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
        map<char,int>m;
        char a;
        for (int i = 0; i < n; i++){
            cin >> a;
            m[a]++;

        } 

        int sum = 0;
        for (auto x : m)
        {
            if((x.second )%2==1){
                sum++;
            }

        }
        
       
        if(sum-1<=k )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}