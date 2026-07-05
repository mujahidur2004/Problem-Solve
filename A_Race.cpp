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
        int a,x,y,al1,al2,bob,bob2;
        cin>>a>>x>>y;
        al1=abs(x-a);
        al2=abs(y-a);
        bob=abs(x-y);
        if(al1>bob || al2>bob)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}