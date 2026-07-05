#include<bits/stdc++.h>
using namespace std;
int const Sz = 1000+10;
bool visited[Sz][Sz];
int n , m;
int start1,start2,end1,end2;

int graph[Sz][Sz];
vector<pair<int,int>> ancestor[Sz];


void bfs(int start1,int start2){
    for(int i=0;i<Sz;i++){
        for(int j=0;j<Sz;j++){
            ancestor[i].push_back({0,0});
        }
    }
    queue<pair<int,int>>q;
    q.push({start1,start2});
    visited[start1][start2]=1;
    ancestor[start1][start2]={start1,start2};
    while(!q.empty()){
        auto current=q.front();
        
        q.pop();
        int a=current.first,b=current.second;
        if(a-1>0 && graph[a-1][b] && !visited[a-1][b]){
            q.push({a-1,b});
            visited[a-1][b]=1;
            ancestor[a-1][b]={a,b};


        }
        if(b-1>0 && graph[a][b-1] && !visited[a][b-1]){
            q.push({a,b-1});
            visited[a][b-1]=1;
            ancestor[a][b-1]={a,b};

        }
        if(a+1<=n && graph[a+1][b] && !visited[a+1][b]){
            q.push({a+1,b});
            visited[a+1][b]=1;
            ancestor[a+1][b]={a,b};

        }
        if(b+1<=m && graph[a][b+1] && !visited[a][b+1]){
            q.push({a,b+1});
            visited[a][b+1]=1;
            ancestor[a][b+1]={a,b};

        }

        
    }

}

int main(){
    
   
    char c;
    
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>c;
            if(c=='A'){
                start1=i;
                start2=j;
                graph[i][j]=1;
            }
            else if(c=='B'){
                end1=i;
                end2=j;
                graph[i][j]=1;
            }
            else if(c=='.')graph[i][j]=1;
        }
    }
   bfs(start1,start2);
    if(visited[end1][end2]){
        cout<<"YES"<<endl;
        pair<int,int> target={end1,end2};
        vector<pair<int,int>>ans;
        while(ancestor[target.first][target.second]!=target){
            ans.push_back(target);
            target=ancestor[target.first][target.second];
        }
        ans.push_back({start1,start2});
        cout<<ans.size()-1<<endl;
        for(int i=ans.size()-1;i>0;i--){
            int a=ans[i].first,b=ans[i].second;
            int c=ans[i-1].first,d=ans[i-1].second;
            if(a==c){
                if(b>d)cout<<"L";
                else cout<<"R";
            }
            else{
                if(a>c)cout<<'U';
                else cout<<"D";
            }
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // for(int i=1;i<=n;i++){
    //     for(int j = 1;j<=m;j++){
    //         cout<<graph[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}