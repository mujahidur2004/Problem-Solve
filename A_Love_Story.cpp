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
        string inputs, s="codeforces";
        int a=0;
        cin>>inputs;
        for(int i=0;i<10;i++)
        {
            if(s[i]!=inputs[i]) a++;
        }
        cout<<a<<endl;

        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}