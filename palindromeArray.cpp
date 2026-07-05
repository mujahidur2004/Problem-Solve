#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,temp,i,j;
    cin>>N;
    temp=N;
    vector<long long>A;
    while(N--)
    {
        cin>>i;
        A.push_back(i);
    }
    for(i=0;i<temp;i++)
    {
        if(A[i]!=A[(temp-1-i)])
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;

}