#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    
        // --------- Problem Logic Starts Here ---------
        string s,s1;
        cin>>s>>s1;
        int a=s[0]-'0',b=s[1]-'0',c=s[3]-'0',d=s[4]-'0';
        int h=a*10+b,min=c*10+d;
        a=s1[0]-'0',b=s1[1]-'0',c=s1[3]-'0',d=s1[4]-'0';
        int h1=a*10+b,min1=c*10+d;
        int resh=h-h1,resmin=min-min1;
        if(resmin<0){
            resmin+=60;
            resh--;
        }
        if(resh<0){
            resh+=24;
        }
        cout<<setw(2)<<setfill('0')<<resh<<":"<<setw(2)<<setfill('0')<<resmin;
        
        // --------- Problem Logic Ends Here -----------
    
    return 0;
}