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

    int t;
    cin >> t;
    while (t--) {
        int n;
   cin>>n;

string s;
cin>>s;

map<int, int> a;

for(int i=0;i<n;i++){

     a[s[i]-'a']++;
}

int max_ch=0; int max_val=INT_MIN;
int min_ch=0; int min_val=INT_MAX;
for(auto c:a){

   if(c.second >max_val){

      max_val=c.second;
      max_ch=c.first;
   }
   if(c.second <= min_val){

      min_val=c.second;
      min_ch=c.first;
   }
   
}
for(int i=0;i<s.size();i++){

     if((s[i]-'a')==min_ch){

     s[i]=  'a'+max_ch ;
     break;
     }
}

cout<<s<<endl;

        
    }
    return 0;
}