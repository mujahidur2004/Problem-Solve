#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        string s;
        int one=0;int zero=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')zero++;
            else one++;

        }
        int count=min(one,zero);
        if(count%2==0)cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}