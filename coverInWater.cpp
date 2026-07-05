#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t,n;
    cin>>t;
    while(t--)
    {
    
        int total_step=0;
        cin>>n;
        vector<char>s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        bool flag=0;
        for(int i=0;i<n;i++)
        {
            if((i<n-2) &&(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'))
            {
                flag=1;
                break;
            }
            if(s[i]=='.')
            {
                total_step++;

            }
            
        }
        if(flag)
            {
                cout<<"2"<<endl;
            }
            else
            {
                cout<<total_step<<endl;
            }
      
    }
    return 0;
}