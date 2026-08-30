#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int n;
        cin >>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=1;
        for(int i=0;i<n;i++){
            for(int j=i+2;i<n;i++){
                ans=max(ans,__gcd(a[i],a[j]));
            }
        }
        cout<<ans<<endl;
        

        

    }
}