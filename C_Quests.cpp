#include<bits/stdc++.h>
using namespace std;


int main(){

  int t;
  cin>> t;
  while(t--){

   int n,k;
   cin>> n>> k;

   vector<int>a(n), b(n);

   for(int i=0;i<n; i++) cin>> a[i];

   for(int i=0; i<n; i++) cin>> b[i];

   int ans=0;
   int high=0,sum=0;
   for(int i=0;i<min(n,k);i++){
     sum+=a[i];
     high=max(high,b[i]);
     int res=sum+(k-i-1)*high;
     ans=max(ans,res);
   }
   cout<< ans<< endl;


 
  }

  return 0;
}