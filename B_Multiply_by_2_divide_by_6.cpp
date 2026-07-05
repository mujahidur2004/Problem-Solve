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
        long long n;
        cin >> n;
        ll res=0,flag=0;
        while(n>1)
        {
            if(n%6==2 ||n%6==4){
                flag=1;
                break;
            }
            if(n%6==0){
                n=n/6;
                res++;
            }
            else{
                n=n*2;
                res++;
            }
            
        }
       

        
        if(flag==1)cout<<-1<<endl;
        else{
            cout<<res<<endl;

        }
        
    }
    
}