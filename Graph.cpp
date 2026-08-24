#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));
    int v,k,ele;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        cin>> k;
        while(k--){
            cin>>ele;
            graph[v][ele]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(i==n && j==n)cout<<graph[i][j];
            else
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    //cout<<endl;
}