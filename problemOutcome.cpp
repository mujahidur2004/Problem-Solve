#include<bits/stdc++.h>
using namespace std;
int check(vector<vector<int>> &m, int row, int col) 
{
    int colsum=0,rowsum=0;
    int k=m.size();
    for(int i=0;i<k;i++)
    {
        colsum=colsum+m[i][col];
        rowsum=rowsum+m[row][i];

    }
    if(colsum>rowsum)
    return 1;
    else return 0;
}
int main()
{
    int n,cnt=0;
    cin>>n;
    vector<vector<int>> m(n, vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int l=check(m,i,j);
            cnt=l+cnt;
            
        }
    }
    cout<<cnt<<endl;

}