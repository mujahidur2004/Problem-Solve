#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        // --------- Problem Logic Starts Here ---------
        char a[3][3];
        char ele;
        int flag=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                
                cin>>ele;
                a[i][j]=ele;
            }
        }
       
        for(int i=0;i<3;i++)
        {
            int cnt=0;
            for(int j=0;j<2;j++)
            {
                if(a[i][j]==a[i][j+1]){
                    cnt++;
                    ele=a[i][j];
                }
                else break;


                
              
            }
            if(cnt==2 && ele != '.'){
                
                flag=1;
                break;

            }
            
            
            
            
        }
        if(flag){
            cout<<ele<<endl;
            continue;
        }
        for(int i=0;i<3;i++)
        {
            int cnt=0;
            for(int j=0;j<2;j++)
            {
                if(a[j][i]==a[j+1][i]){
                    cnt++;
                    ele=a[j][i];
                }
                else break;


                
              
            }
            if(cnt==2  && ele !='.'){
                
                flag=1;
                break;

            }
            
            
            
            
        }
        if(flag){
            cout<<ele<<endl;
            continue;
        }
        if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]!='.'){
            flag=1;
            ele=a[0][0];
            cout<<ele<<endl;
            continue;
        }
        if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[2][0] !='.'){
            flag=1;
            ele=a[2][0];
            cout<<ele<<endl;
            continue;
        }

        
        cout<<"DRAW"<<endl;

        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}