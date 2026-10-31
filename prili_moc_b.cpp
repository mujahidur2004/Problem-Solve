#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, l , n;
        cin >> a>> b >> l >> n;
        if(b==1){
            cout<<"NO"<<endl;
            continue;
        }
        int rem =  a-l;
        if(rem <= n)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
}