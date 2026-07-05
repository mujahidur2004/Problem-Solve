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
        ll n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        if(x==0 && y==0){
            cout<<"YES"<<endl;
            continue;
        }
        ll eight=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='8')
            {
                eight++;
            }
        }
        x=llabs(x);
        y=llabs(y);
        ll sum=n+eight;
        if(x+y<=sum && max(x,y)<=n){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }        

        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}