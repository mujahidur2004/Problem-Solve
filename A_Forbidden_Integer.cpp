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
        int n,k,x;
        cin >> n>>k>>x;
        if(n%2==0)
        {
            //cout<<"YES"<<endl;
            if(k==1)cout<<"NO"<<endl;
            else if(x==1)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=2;i<=n;i=i+2)
                {
                    cout<<2<<" ";

                }
                cout<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=1;i<=n;i++) 
                {
                    cout<<1<<" ";

                }
                cout<<endl;
            }
        }
        else{
            if(x==1 && k<3)cout<<"NO"<<endl;
            else if(x==1){
                cout<<"YES"<<endl;
                cout<<n/2-1;
                cout<<3<<" ";
                for(int i=4;i<=n-3;i=i+2)
                {
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=1;i<=n;i++)
                {
                    cout<<1<<" ";

                }
                cout<<endl;

            }
        }
       
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}