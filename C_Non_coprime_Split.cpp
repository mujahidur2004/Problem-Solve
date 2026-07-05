#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
void mujahid_coder_2004(){
 int x,y;
       cin>>x>>y;
    //    for(int i=2;i<=y;i+=2){
    //     if(2+i>=x  && 2+i<=y){
    //         cout<<2<<" "<<i<<endl;
    //         return;

    //     }
     if(x==y){
        int ok=0;
         for(int i=2;i<=sqrt(y);i++){
            if(x%i==0){
            cout<<x-i<<" "<<i<<endl;
            return; 
            }

        }
       }
       if(x%2==0){
        if(x-2>0){
            cout<<x-2<<" " << 2<<endl;
            return;
        }
        if(x+2<=y){
            cout<<x<<" "<<2<<endl;
            return;
        }
       }

       else{

          if(x-1>0   &&  x-1+2<=y){
            cout<<x-1<<" " << 2<<endl;
            return;
        }
        if(x+1+2<=y){
            cout<<x+1<<" "<<2<<endl;
            return;
        }
       }
      
       cout<<-1<<endl;
}
int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
      mujahid_coder_2004();
      
    }
    return 0;
}
