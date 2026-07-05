#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,m,p=0,ac=0;
    cin>>n>>m;
    vector<int>a(100000,0);
    
    for(int i=0;i<m;i++)
    {
        int k;
        char s[3];
        cin>>k>>s;
        
        if(s[0]=='A')
        {
            
            if(a[k]>=0)
            {
                ac++;
                p=p+a[k];
                a[k]=-100000;


            }


        }
        else
        {
            a[k]++;
        }

    }
    cout<<ac<<" "<<p<<endl;

    
    

}
