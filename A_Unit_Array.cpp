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
        int p=0,N=0;
        //vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            int ele;
            cin >> ele;
            if(ele==-1)N++;
            else p++;
        }
        int diff=0;
        if(N>p){
            diff=(N-p+1)/2;
            N=N-diff;
        }
        if(N%2==1){
            cout<<diff+1<<endl;
        }
        else cout<<diff<<endl;
       
        

       
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}