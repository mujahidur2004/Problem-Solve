#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n+1,0);
        for(int i =1;i<n+1;i++)
        {
            cin>>a[i];
        }
        int Min=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int array_max=a[i]+a[j]+j-i;
                if(array_max<Min)
                {
                    Min=array_max;
            }
        }


    }
        cout<<Min<<endl;

}
}