#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        map<char,int>a,b;
        for(int i=0;i<n;i++)
        {
            char c;
            cin>>c;
            a[c]++;
        }
        for(int i=0;i<n;i++)
        {
            char c;
            cin>>c;
            b[c]++;
        
           
    }
    int flag=1;
    for(auto ele:a)
    {
        char c=ele.first;
        int t=ele.second;
        if(b[c]!=t)
        {
            flag=0;
            break;
        }

    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO\n";
    
}
}