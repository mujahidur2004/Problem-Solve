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
        int n,five=0,six=0;
        cin >> n;
        string s;
        cin>>s;
        for(int i=0;i<n-3;i++){
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5')
                five++;
            if (s[i ] == '2' && s[i +1] == '0' && s[i +2] == '2' && s[i+3] == '6')
                six++;
        }
        if(six)cout<<0<<endl;
        else if(five)cout<<1<<endl;
        else cout<<0<<endl;

        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}