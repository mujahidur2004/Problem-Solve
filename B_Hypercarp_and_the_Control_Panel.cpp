#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int> a(n+2);
        a[0]=0;
        a[n+1]=0;
        for(int i=1;i<=n;i++){
            cin >>a[i];
        }
        int cnt=1;
        
        for(int i=2;i<=n;i++){
            if(a[i]!=a[i-1])cnt++;
        }
        //cout<<cnt<<" ";
        int extra=0;
        for(int i=0;i+3 < n+2;i++){
            int a1=a[i],b=a[i+1],c=a[i+2],d =a[i+3];
            if(a1==b && c==d && c!=b)extra=max(extra,2);
            if(a1==b && c!= b && b!= d) extra=max(extra,1);
            if(c==d && a1!= c &&  b!= c)extra=max(extra,1);
        }
        cout<< cnt+extra<<endl;
        
    }
    
}