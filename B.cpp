#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ck1 = 0, ck2 = 0;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                cnt++;
        }
        if (cnt == n)
        {
            cout << n << endl;
            continue;
        }
        if (cnt == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n < 4)
        {
            cout << n << endl;
            continue;
        }

        stack<int> st;
        st.push(a[0]);
        int f = 1;
        for (int i = 1; i < n; i++)
        {
            if (st.top() != a[i])
            {
                st.push(a[i]);
            }
            else if (f && st.top() != a[i + 1] && i + 1 < n)
            {
                st.push(a[i + 1]);
                st.push(a[i]);
                i++;
                f = 0;
            }
        }
        multiset<int> st1;
        for (int i = 0; i + 3 < n; i++)
        {
            st1.clear();
            // cout<<st.size()<<" ";
            st1.insert(a[i]);
            st1.insert(a[i + 1]);
            st1.insert(a[i + 2]);
            st1.insert(a[i + 3]);
            // cout<<st.size()<<" ";
            if (st1.count(a[i]) == 2 || st1.count(a[i + 1]) == 2 || st1.count(a[i + 2]) == 2 || st1.count(a[i + 3]) == 2)
            {
                ck2 = 1;
                break;
            }
        }

        cout << st.size()+ck2 << endl;
    }
}