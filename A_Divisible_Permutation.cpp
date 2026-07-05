#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int i=1,k=n,m=n-1;

        for(int j=1;j<=n/2;j++){

            //cout<<i<<' '<<k<<" ";
            a[m]=i;
            m--;
            a[m]=k;
            m--;
            i++,k--;

        }
        if(n%2==1)a[0]=(n/2)+1;
        for(int l=0;l<n;l++){
            cout<<a[l]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
