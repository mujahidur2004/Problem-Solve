#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a;
        int res=0;
        for(int i= 1;i<11;i++)
        {
            for(int j=1;j<11;j++)
            {
                cin>>a;
                if(a=='X')
                {

                    if(i ==1 ||i==10 ||j==10 ||j==1)
                    {
                        res=res+1;
                    }
                    else if(i ==2 ||i==9 ||j==2 ||j==9)
                    {
                        res=res+2;
                    }
                    else if(i ==3 ||i==8 ||j==3 ||j==8)
                    {
                        res=res+3;
                    }
                    else if (i ==4 ||i==7 ||j==4 ||j==7)
                    {
                        res=res+4;
                    }
                    else
                    {
                        res=res+5;
                    }

                }

            }
        }
        cout<<res<<endl;

    }
}