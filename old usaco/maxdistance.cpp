#include <bits/stdc++.h>

using namespace std;

int d(int p1, int p2, int q1, int q2) {
    return (q2-q1) * (q2-q1) + (p2-p1) * (p2-p1);
}
int main() {
    int n; cin >> n;
    int p[n], q[n];
    for (auto&i:p) cin >> i;
    for (auto&i:q) cin >> i;

    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)  {
            res = max(res,d(p[i], p[j], q[i], q[j]));
        }
    }
    cout << res;
}