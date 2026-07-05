/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd
void SWAP(vector<vector<int>>&v,int n,int x,int y){
    for(int i=0;i<n;i++){
        swap(v[x][i],v[y][i]);
    }
    for(int i=0;i<n;i++){
        swap(v[i][x],v[i][y]);
    }
    
}

int main() {
    fast_io;

    int n,x,y;
    cin>>n>>x>>y;
    x--,y--;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    SWAP(v,n,x,y);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<nl;
    }

    return 0;
}