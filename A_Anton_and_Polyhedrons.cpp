#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
     ll res=0;
    cin >> t;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        string s;
       
        cin>>s;
        if(s=="Tetrahedron")res+=4;
        else if(s=="Cube")res+=6;
        else if(s=="Octahedron")res+=8;
        else if(s=="Dodecahedron")res+=12;
        else res+=20;
        // --------- Problem Logic Ends Here -----------
    }
    cout<<res<<endl;
    return 0;
}