#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        long long ans = k;
        if(k%(n-1)==0){
            ans+=(k/(n-1) -1);
        }
        else{
            ans+=(k/(n-1));
        }
        cout<<ans<<endl;
    }
}