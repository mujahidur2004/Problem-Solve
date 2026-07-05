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
        long int n,x,l=0,h=0;
        cin >> n>>x;

        vector<long int> a(n);
        for (int i = 0; i < n; i++) {
            long int ele;
         
            cin >> ele;
            if(ele>x)h++;
            if(ele<x)l++;

        }


        if(h>l)cout<<x+1<<endl;
        else cout<<x-1<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}