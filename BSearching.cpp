#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,temp,X;
    vector<long long>A;
    cin>>N;
    temp=N;
    while(N--)
    {
        cin>>X;
        A.push_back(X);
    }
    cin>>X;
    for(long  long i=0;i<temp;i++)
    {
        if(A[i]==X)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

}