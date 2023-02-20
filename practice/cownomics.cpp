#include <bits/stdc++.h>

using namespace std;
// int f(int n)
// {
//     int result = 1;
//     while (n > 1)
//     {
//         result *= n--;
//     }
//     return result;
// }

// vector<vector<int>> generateCombinations(int n)
// {
//     vector<vector<int>> arr;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             for (int k = j + 1; k <= n; k++)
//             {
//                 vector<int> v = {i, j, k};
//                 // cout << i << ' ' << j << ' ' << k << endl;
//                 arr.push_back(v);
//             }
//         }
//     }
//     return arr;
// }

int solve()
{

    // freopen("cownomics.in", "r", stdin);
    // freopen("cownomics.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<string> spotty, plain;
    string s;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        spotty.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        plain.push_back(s);
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            for (int k = j + 1; k <= m; k++)
            {
                bool works = true;
                for (string sC : spotty)
                {
                    if (!works)
                        break;
                    for (string pC : plain)
                    {
                        if (sC[i] == pC[i] && sC[j] == pC[j] && sC[k] == pC[k])
                        {
                            works = false;
                            break;
                        }
                    }
                }
                if (works)
                    res++;

                // cout << i << ' ' << j << ' ' << k << endl;
            }
        }
    }
    return res;
}
int main()
{
    cout << solve();
    return 0;
}