/*
BISMILLAH HIR RAHMAN NIR RAHIM
Md Mujahidur Rahman
Department of CSE
Netrokona University, Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define nl '\n'

bool leap(ll y)
{
    return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
}

ll countLeap(ll y)
{
    if(y <= 0)
        return 0;

    return y / 4 - y / 100 + y / 400;
}

int monthNumber(string s)
{
    if(s == "January")   return 1;
    if(s == "February")  return 2;
    if(s == "March")     return 3;
    if(s == "April")     return 4;
    if(s == "May")       return 5;
    if(s == "June")      return 6;
    if(s == "July")      return 7;
    if(s == "August")    return 8;
    if(s == "September") return 9;
    if(s == "October")   return 10;
    if(s == "November")  return 11;
    if(s == "December")  return 12;

    return 0;
}

int main()
{
    fast_io;

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++)
    {
        string month1, day1, month2, day2;
        ll year1, year2;

        cin >> month1 >> day1 >> year1;
        cin >> month2 >> day2 >> year2;

        // Remove comma from day
        day1.pop_back();
        day2.pop_back();

        int m1 = monthNumber(month1);
        int d1 = stoi(day1);

        int m2 = monthNumber(month2);
        int d2 = stoi(day2);

        // Count all leap years from year1 to year2
        ll ans = countLeap(year2) - countLeap(year1 - 1);

        // First date is after February 29
        if(leap(year1))
        {
            if(m1 > 2 || (m1 == 2 && d1 > 29))
            {
                ans--;
            }
        }

        // Second date is before February 29
        if(leap(year2))
        {
            if(m2 < 2 || (m2 == 2 && d2 < 29))
            {
                ans--;
            }
        }

        cout << "Case " << tc << ": " << ans << nl;
    }

    return 0;
}