#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 5e4 + 10;
map<string, bool> visit;
map<string, vector<string>> graph;
map<string, string> ancestor;

void bfs(string root)
{
    queue<string> st;
    st.push(root);
    ancestor[root] = root;
    visit[root] = 1;
    while (!st.empty())
    {
        root = st.front();
        // cout<<root+1<<" ";
        st.pop();
        for (auto u : graph[root])
        {
            if (visit[u] == 0)
            {
                visit[u] = 1;
                ancestor[u] = root;
                st.push(u);
            }
        }
    }
}

int main()
{
    int n;
    int cnt=0;

    while (cin >> n)
    {
        if(cnt>0)cout<<endl;
        cnt++;
        
        int temn = n;
        graph.clear();
        visit.clear();
        ancestor.clear();

        while (temn--)
        {
            string v1, v2;
            cin >> v1 >> v2;
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        string s, e;
        cin >> s >> e;

        bfs(s);

        if (visit[e])
        {
            string target = e;
            vector<string> res;
            while (target != s)
            {
                res.push_back(target);
                target = ancestor[target];
            }
            res.push_back(s);
            for (int i = res.size() - 1; i > 0; i--)
            {
                cout << res[i] << " " << res[i - 1] << endl;
            }
            
        }
        else
        {
            cout << "No route"<<endl;
        }
        
    }

    return 0;
}