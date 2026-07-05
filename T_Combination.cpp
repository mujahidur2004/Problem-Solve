#include <bits/stdc++.h>
using namespace std;

long long ncr(int n, int r){
    if(r==0 || r==n) return 1;   // base case
    return ncr(n-1,r-1) + ncr(n-1,r);
}

int main(){
    int n,r;
    cin>>n>>r;

    cout<<ncr(n,r)<<endl;
}