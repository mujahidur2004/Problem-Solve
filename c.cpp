#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,problem=INT_MIN,sum=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>problem)
        {
            problem=a[i];
        }
    }
    while(sum<problem)
    {
        sum=sum+k;
        k++;

    }
    
    cout<<k-1<<endl;
}
