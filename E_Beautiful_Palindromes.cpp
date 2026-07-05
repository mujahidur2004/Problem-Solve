#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        set<int>a;
        vector<int>ab;
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            a.insert(ele);
            ab.push_back(ele);
            
        }
        
        
        
        for(int m=1;m<=n && cnt<k;m++)
        {
            
           if(a.find(m)==a.end())
           {
             cout<<m<<" ";
             cnt++;

           }
        }
        for(int m=0;m<n && cnt<k;m++)
        {
            cout<<ab[m]<<" ";
            cnt++;
                
        }


        
        cout<<endl;
        

    }
    
}