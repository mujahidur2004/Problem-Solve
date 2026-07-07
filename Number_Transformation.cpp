#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int N = 5e4 + 10;
vector<bool> visited(N);

vector<int> ancestor(N);
vector<int> primes;

void bfs(int root, int target)
{
    queue<int> st;
    st.push(root);
    ancestor[root] = root;
    visited[root] = 1;
    while (!st.empty())
    {
        root = st.front();
        // cout<<root+1<<" ";
        st.pop();
        for (auto u : primes)
        {
            if(u+root>target)continue;
            if (visited[u + root] == 0)
            {
                visited[u + root] = 1;
                ancestor[u + root] = root;
                st.push(u + root);
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;
    for (int T = 1; T <= t; T++)
    {
        visited.clear();
        ancestor.clear();
        primes.clear();

        int n, m, s, e;

        cin >> n >> m;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                primes.push_back(i);

                while (n % i == 0)
                    n /= i;
            }
        }

        if (n > 1)
            primes.push_back(n);
        bfs(n, m);

        if (visited[m])
        {
            int target = m;
            vector<int> res;
            while (ancestor[target] != target)
            {
                res.push_back(target);
                target = ancestor[target];
            }
            res.push_back(s);
            cout<<"Case "<<T<<": ";
            cout << res.size() - 1 << endl;
            // for (int i = res.size() - 1; i >= 0; i--)
            // {
            //     cout << res[i] << " ";
            // }
         
        }
        else
        {   cout<<"Case "<<T<<": ";
            cout << "-1\n";
        }
    }

    return 0;
}
