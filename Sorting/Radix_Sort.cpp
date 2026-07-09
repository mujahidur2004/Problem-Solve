#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 10;
    int arr[n]={456,121,895,355,677,6789,999,3456,1,56};
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int m=0;
    for (int i = 0; i < n; i++)
    {
        m = max(m,(int)log10(arr[i])+1);
    }
    int po [m+1]={1};
    for (int i = 1; i <= m; i++)
    {
        po[i]=po[i-1]*10;
    }
    
    for (int i = 1; i <= m; i++)
    {
        vector<vector<int>>feq(10);
        for (int j = 0; j < n; j++)
        {
            int idx = (arr[j] % po[i]) / po[i-1];
            feq[idx].push_back(arr[j]);
        }
        for (int j = 0,k=0; j < 10; j++)
        {
            for(int u : feq[j]){
                arr[k++] = u;
                cout<<u<<" ";
            }

        }
        cout<<endl;
        
    }
    

    return 0;
}