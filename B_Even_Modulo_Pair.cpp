#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main()
{
    fast_io;
    int t ;
    cin >> t;
    while (t--)
    {
        // --------- Problem Logic Starts Here ---------
        int n,flag=1;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        for(int i=0; i<n && flag==1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                long long s=a[j]%a[i];

                if(s%2==0)
                {
                    cout<<a[i]<<" "<<a[j];
                    flag=0;
                    break;
                }
            }
        }
        if(flag)cout<<-1;
        cout<<endl;
        // --------- Problem Logic Ends Here -----------
    }
    return 0;
}
