#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
      
        for(int l=0;l<N;l++)
        {
            for(int r=l;r<N;r++)
            {
                int M= A[r];
                for(int i=l;i<=r;i++)
                {
                    if(A[i]>M)
                    {
                        M=A[i];
                    }
                }
                cout<<M<<" ";
            }

           

        }
         cout<<endl;
    }


    return 0;
}