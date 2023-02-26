#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int road_segments[101];
    int bessie_segments[101];
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int miles, limit;
        cin >> miles >> limit;
        for (int i = 0; i < miles; i++) {
            road_segments[i] = limit;
        }
    }
    
    for (int i = 0; i < m; i++) {
        int miles, limit;
        cin >> miles >> limit;
        for (int i = 0; i < miles; i++) {
            bessie_segments[i] = limit;
        }
    }
    int bad = 0;
    for (int i = 0; i < 100; i++) {
        if (road_segments[i] > bessie_segments[i]) {
            bad = max(bad, road_segments[i]-bessie_segments[i]);
        }
    }
    cout << bad;
}