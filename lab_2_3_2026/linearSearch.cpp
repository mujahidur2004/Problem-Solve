/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd

int main() {
    fast_io;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    int ind=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            ind=i;
            break;
        }
    }
    if(ind>=0){
        cout<<"Found"<<nl;
        cout<<"Index="<<ind<<nl;
    }
    else{
        cout<<"Not Found"<<nl;
    }
       
    
    return 0;
}