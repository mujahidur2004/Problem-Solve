/*
    "BISMILLAH HIR RAHMAN NIR RAHIM"
    ("IN THE NAME OF ALLALH, THE MOST GRACIOUS AND THE MOST MERCIFUL")
 
    thewoahguy24
    DEPT OF CSE
    SHEIKH HASINA UNIVERSITY, NETROKONA, BANGLADESH.
*/
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
/* defined */
#define iset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define clear_buffer cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define NL "\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
 
#define test_case      \
    int test_count;    \
    cin >> test_count; \
    for (int t = 1; t <= test_count; t++)
 
int main()
{
    fio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test_case
    {
        int ans = 4, i = 0;
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            s[0] = '0' + 10;
        }
        if (s[1] == '0')
        {
            s[1] = '0' + 10;
        }
        if (s[2] == '0')
        {
            s[2] = '0' + 10;
        }
        if (s[3] == '0')
        {
            s[3] = '0' + 10;
        }
 
        ans += s[0] - '1';
        ans += max(s[1], s[0]) - min(s[1], s[0]);
        ans += max(s[2], s[1]) - min(s[2], s[1]);
        ans += max(s[3], s[2]) - min(s[3], s[2]);
        cout << ans << NL;
    }
    return 0;
}
/*
 
*/