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

int binaryToDecimal(string s)
{
    int value = 0;

    for(char c : s)
    {
        value = value * 2 + (c - '0');
    }

    return value;
}

int main()
{
    fast_io;

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++)
    {
        string decimalIP, binaryIP;

        cin >> decimalIP;
        cin >> binaryIP;

        // Convert decimal IP into 4 integers
        vector<int> decimal;
        string part = "";

        for(char c : decimalIP)
        {
            if(c == '.')
            {
                decimal.push_back(stoi(part));
                part = "";
            }
            else
            {
                part += c;
            }
        }

        decimal.push_back(stoi(part));

        // Convert binary IP into 4 integers
        vector<int> binary;
        part = "";

        for(char c : binaryIP)
        {
            if(c == '.')
            {
                binary.push_back(binaryToDecimal(part));
                part = "";
            }
            else
            {
                part += c;
            }
        }

        binary.push_back(binaryToDecimal(part));

        bool same = true;

        for(int i = 0; i < 4; i++)
        {
            if(decimal[i] != binary[i])
            {
                same = false;
                break;
            }
        }

        cout << "Case " << tc << ": "
             << (same ? "Yes" : "No") << nl;
    }

    return 0;
}