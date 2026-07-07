#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 5e4 + 10;
map<char, bool> visit;
map<char, vector<char>> graph;
int cnt = 0;

int bfs(char root)
{
    queue<char> st;
    st.push(root);

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
                cnt++;
                visit[u] = 1;

                st.push(u);
            }
        }
    }
    return cnt;
}

int main()
{

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {

        graph.clear();
        visit.clear();
        char node;
        cin >> node;
        cin.ignore();
        string s;
        while (getline(cin, s) && !s.empty())
        {

            graph[s[0]].push_back(s[1]);
            graph[s[1]].push_back(s[0]);
        }
        int res = 0;
        for (char i = 'A'; i <= node; i++)
        {
            if (!visit[i])
            {
                bfs(i);
                res++;
            }
        }
        cout << res << '\n';
        if (t)
            cout << '\n';
    }
    return 0;
}