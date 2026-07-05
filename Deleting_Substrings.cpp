#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m,ans=0;
        cin>>n>>m;
        string a,b;
        vector<int>st;
        cin>>a>>b;
        int i=0,j=0;
        st.push_back(-1);
        for( ;i<n && j<m;i++){
            if(a[i]==b[j]){
                
                j++;
                st.push_back(i);
            }
            
            

        }
        if(j<m){
            cout<<-1<<endl;
            continue;
        }
        else{
            for(int i=1;i<st.size();i++){
                if(st[i]-st[i-1]!=1){
                    ans++;
                }
            }
            cout<<ans<<endl;


        }

        

    }

}
