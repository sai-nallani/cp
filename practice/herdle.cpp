#include <bits/stdc++.h>

using namespace std;
int g, y;
bool in(char a, string b)
{
    for (char c : b)
        if (a == c)
            return true;
    return false;
}
pair<int, int> solve(string w1, string g1)
{
    bool alphabet[26];
    int tmp = 0;
    for (int i = 0; i < 3; i++)
    {
        if (w1[i] == g1[i])
            g++;
        else if (in(g1[i], w1) && !alphabet[g1[i] - 97])
        {
            if (i != 2 && g1[i + 1] == g1[i] && g1[i + 1] == w1[i + 1]) {
                continue;
            } else if (i != 2 && g1[i + 2] == g1[i] && g1[i + 2] == w1[i + 2]) {
                continue;
            } else {
                alphabet[g1[i] - 97] = true;
                y++;
            }
        }
    }
    return make_pair(g, y);
}
void newSolve(string w, string u) {
    bool flagArr[9];
    for (auto&i : flagArr) i = false;
    //cout << w << '\n' << u <<'\n';
    for (int i = 0; i < 9; i++) {
        if (w[i] == u[i]) {
            g++;
            flagArr[i] = true;
        }
    }
    for (int i = 0; i < 9; i++) {
        if (in(u[i], w) && u[i] != w[i]) {
            //cout << u[i] << '\n';
            for (int j = 0; j < 9; j++) {
                if (!flagArr[j] && w[j] == u[i]) {
                    //cout << j << ' ' << i << ' ' << w[j] << ' ' << u[i] << '\n';
                    flagArr[j] = true;
                    y++;
                    break;
                }
            }
        }
    }
    cout << g << '\n' << y;
}
int main()
{
    string w1, w2, w3, g1, g2, g3;
    cin >> w1 >> w2 >> w3 >> g1 >> g2 >> g3;
    newSolve(w1 + w2 + w3, g1 + g2 + g3); 
    return 0;
}
