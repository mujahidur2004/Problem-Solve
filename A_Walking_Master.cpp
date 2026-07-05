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
        int a,b,c,d,res=0;
        cin >> a>>b>>c>>d;
        if(d<b){
            cout<<-1<<endl;
            continue;
        }
        res=(d-b);
        a=a+res;
        if(a>=c)cout<<res+(a-c)<<endl;
        else cout<<-1<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}