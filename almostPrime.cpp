#include<bits/stdc++.h>
using namespace std;
int Almost_Prime(int number)
{
    int count =0;
    for(int i=2;i<number;i++)
    {
        if(number%i ==0)
        {
            
            count++;
        }
        if(count==2)
        {
            return 1;
        }
    }
    return 0;

}
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        bool flag=(Almost_Prime(i));
        if(flag)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

}