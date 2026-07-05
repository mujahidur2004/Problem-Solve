#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'


int main() {

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int test_case;
   cin >> test_case;
   while (test_case--)
   {
ll n,k;
cin>>n>>k;
vector<ll>v(n);
set<ll>st;
for (int i = 0; i < n; ++i)
{
   cin>>v[i];
   st.insert(v[i]);
}
sort(v.begin(),v.end());
int ans=0,step=0;
ll t=n-(n-k+1),i=1;
for(auto u:st){
if(u==ans)ans++;
i++;
if(i>t)break;



}
cout<<ans<<endl;

     
   }
 return 0;
}