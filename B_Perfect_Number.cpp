#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    int cur = 0;
    long long number=10;
    int ck,sum=0;
    string s;
    while(1){
        ck=1;
        sum=0;
        s=to_string(number);
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'0';
            
            if(sum>10){
                ck=0;
                break;
            }
        }
        if(ck  && sum==10){
            cur++;
        }
        if(cur==k){
            cout<<number<<endl;
            break;
        }
        number++;

    }

}