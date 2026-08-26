#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int ck=1;
        for(int i=2;i<=n;i++){
            if((n+1) % i ==0){
                ck=0;
                break;
            }
        }
        if(ck){
            cout<<"YES"<<endl;
            continue;
        }
        ck=1;
        for(int i=3;i<=n+1;i++){
            if(i%2 !=0){
                ck=0;
            }
        }
        if(ck){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
    
}