#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >>t;
    for(int i=1;i<=t;i++)
    {
       if(i%2==1){
        cout<<"I hate ";
       }
       else{
        cout<<"I love ";
       }
       if(i==t)cout<<"it"<<endl;
       else cout<<"that ";
    }
    return 0;
}