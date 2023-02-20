#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        string s;
        cin >> n >> s;
        bool works = true;
        bool typo = false;
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            res += c;
            if (typo)
            {
                res += c;
                i += 1;
            }
            typo = !typo;
        }
        if (res == s)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
        t--;
    }
    return 0;
}