#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        cin>>a[0];
        int res=0;
        for(int i=1;i<n;i++){
            int ele;
            cin>>ele;
            if(ele==1)res++;
            else if(a[i-1]+1==ele)res++;

            a[i]=ele;

        }
        if(a[0]==1)res++;
        cout<<res<<endl;

    }

}
