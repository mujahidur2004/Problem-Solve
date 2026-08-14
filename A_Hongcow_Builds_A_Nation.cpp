#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 1e6+10;
vector<int > graph[N];
vector<int>Degree(N),SpecialCity;
bitset<N>visited;

vector<pair<int,int>> TotalNode;
int n,m, k;
pair<int,int> khns(int root){
    int node_count=0,edge_cnt=0;
    queue<int> q;
    q.push(root);
    
    while (!q.empty())
    {
        
        root=q.front();
        
        q.pop();
        if(visited[root]){
            continue;
        }
        visited[root]=1;
        node_count++;
        for(auto ele :graph[root]){
            if(visited[ele]){
                continue;
            }
            q.push(ele);
            edge_cnt++;
        }

        /* code */
    }
    return {node_count,edge_cnt};
    



}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m >> k;
    for(int i=0;i<k;i++){
        int city;
        cin>>city;
        SpecialCity.push_back(city);
    }
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        Degree[y]++;
        Degree[x]++;
    }
    int freenode=n;
    ll special_ct_e=0;
    for(int i=0;i<k;i++){
        auto cur_node=khns(SpecialCity[i]);
        
        TotalNode.push_back(cur_node);
        freenode-=cur_node.first;
        special_ct_e += cur_node.second;
    }
    sort(TotalNode.begin(),TotalNode.end(),greater<pair<int,int>>());
    ll  ans=(special_ct_e-m);
    for(int i=0;i<k;i++){
        ll cur_n=TotalNode[i].first;
        

        if(i==0){
            cur_n+=freenode;


        }
        ans += (((cur_n*(cur_n-1))/2)-TotalNode[i].second);

    }
    cout << ans<<endl;
    
    
    

    return 0;
}