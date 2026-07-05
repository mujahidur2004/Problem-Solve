#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int low,high,mid;
    if(a>b && a>c){
        high=a;
    }
    else if(b>a && b>c){
        high=b;
    }
    else high=c;
    if(a<b && a<c){
        low =a;
    }
    else if(b<a && b<c){
        low=b;
    }
    else low=c;
    
    if(a>low && a<high){
        mid=a;
    }
    else if(b>low && b<high){
        mid=b;
    }
    else mid=c;
    cout<<"High ="<<high<<" "<<"Mid=" <<mid<<" "<<"Low="<<low<<endl;
    return 0;
}