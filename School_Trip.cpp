#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int ans=y%z;
        if(ans==0){
            cout<<ans<<endl;
            continue;
        }
        else{
        if((ans+y)<=x){
            ans=min(y%z,z-(y%z));
            cout<<ans<< endl;
        }
        else{
            cout<<ans<<endl;
        }
        }
        
        
       
        
    }

}
