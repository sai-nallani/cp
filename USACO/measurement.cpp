#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    pair<string, int> p1("M", 7);
    pair<string, int> p2("E", 7);
    pair<string, int> p3("B", 7);
    vector<pair<string, int>> cows = {p1, p2, p3}; // m, e, b : 0 1 2
    vector<vector<int>> measurements(n);
    for (int i = 0; i < n; i++) {
        int d; string c; int change; int x;
        cin >> d; cin >> c; cin >> change;
        if (c[0] == "M") x = 0;
        if (c[0] == "E") x = 1;
        if (c[0] == "B") x = 2;
        vector<int> m = {d, x, change}
    }
    int res = 0;
    sort(measurements.begin(), measurements.end(), [](const vector<int>& lhs, const vector<int>& rhs) {
      return lhs[0] < rhs[0];});
    for (auto (&r) : measurements) {
        vector<int> temp = cows;
        for (auto&i:cows) {
            if (i.first == r[1]) {
                i.second += r[2];
            }
        }
        sort(cows.begin(), cows.end(), [](const pair<char, int>&lhs, const pair<char, int>&rhs) {
            return lhs.second < rhs.second;
        });
        for (int i = 0; i < 3; i++) {
            if (temp[i].first != cows[i].first) {
                res++; break;
            }
        }
    }
    cout << res;
}