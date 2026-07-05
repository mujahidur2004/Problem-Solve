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
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> M;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            M[a[i]]++;
        } 

        int sum = 0;
        for (auto &x : M)
        {
            int a=x.second;
            int b=x.first;
            if(a>b){
                sum+=(a-b);
            }
            if(a<b){
                sum+=a;
            }

        } 
        cout << sum << endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}