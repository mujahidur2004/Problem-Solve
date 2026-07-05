/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define nl '\n'
#define gcd __gcd
const int N = 1e5 + 10;
vector<int> tree[N];
bool vis[N];
vector<ll> a(N + 1);
int n, m;
void dfs(int node , int cat_count) 
{
   
    for(auto ele : tree[node])
    {
        if(cat_count +a[ele]==m || vis[ele])continue;
        vis[ele]=1;
        if(a[ele]){
            
            dfs(ele,cat_count+1);
        }
        else dfs(ele,0);
    }
}

int main()
{
    fast_io;

    
    cin >> n >> m;
    m++;
    

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int tem=n;
    n--;
    while(n--)
    {
        int v1,v2;
        cin >> v1 >> v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }
    vis[1]=1;
    dfs(1,a[1]);
    int res = 0;
    n=tem;
    for(int i=2;i<= n;i++){
        if(vis[i] && tree[i].size()==1)res++;

    }
    cout << res <<endl;

    return 0;
}