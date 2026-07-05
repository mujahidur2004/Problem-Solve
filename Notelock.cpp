#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;
        vector<int> s(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>s[i];

        }
        
        int res=0;
        for(int i=n-1;i>=k-1;i--)
        {
            int cnt=0,flag=1;
            if(s[i]==1)
            {
                for(int j=i-k+1;j<i && flag==1;j++)
                {
                    if(s[j]!=0)
                    {
                        flag=0;

                    }

                }
                

            }
            if(flag)
            {
                res++;
            }
            


        }
        cout<<res<<endl;
    }
}

