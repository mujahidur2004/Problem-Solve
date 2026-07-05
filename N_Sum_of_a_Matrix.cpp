#include <bits/stdc++.h>
using namespace std;

int R, C;
int A[105][105], B[105][105];

void solve(int i, int j)
{
    if(i == R) 
        return;

    if(j == C)
    {
        cout << "\n";
        solve(i + 1, 0);
        return;
    }

    cout << A[i][j] + B[i][j] << " ";

    solve(i, j + 1);
}

int main()
{
    cin >> R >> C;

    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            cin >> A[i][j];

    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            cin >> B[i][j];

    solve(0, 0);
}