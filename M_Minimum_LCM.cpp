#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        int n;
        cin >> n;
        int ans1=1,ans2=n-1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                
                ans1=n/i;
                ans2=n-ans1;
                break;
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
        
    }
    return 0;
}