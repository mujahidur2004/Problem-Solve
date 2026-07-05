#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    map<int,int>pos;
    pos[1]++;
    int num=1;
    for(int i=1;i<2e31;i++){
        int posi=num+i;
        pos[posi]++;

    }
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n;
        cin >> n;
        if(pos[n]==1)cout<<1<<" ";
        else cout<<0<<" ";
        
        // --------- Problem Logic Ends Here -----------
    }
    cout<<endl;
    return 0;
}