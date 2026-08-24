#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n , k;
        cin >>n>>k;
        string s;
        cin>> s;
        n*=2;
        string s1 =s;
        for(int i=0;i<n;i++){
            if(s[i]== '1' && s[(i+1) %n]=='0'){
                s1[i]='0',s1[(i+1)%n]='1';
            }
        }
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                if(i%2)a++;
                else b++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
}