#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,f=1;
        cin >> n;
        map<int,int > a;
        for (int i = 0; i < n; i++) {
            int ele;
            cin>>ele;
            a[ele]++;


        }
        for(auto ele: a)
        {
            int value=ele.second;
            if(value%2==1)
            {
                cout<<"YES"<<endl;
                f=0;
                break;
            }
            
        }
        if(f)
        {
            cout<<"NO"<<endl;
        }

        
        
       
    }
}
