#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

bool abeatb(vector<int> a, vector<int> b) {
  int count = 0;
  for (int i : a) {
    for (int j : b) {
      if (i > j) {
        count++;
      }
    }
  }
  int nc = 0;
  for (int i : b) {
    for (int j : a) {
      if (i > j) {
        nc++;
      }
    }
  }
  return (count > nc);
}
void solve() {
  vector<int> a(4), b(4);
  for (int &i : a)
    cin >> i;
  for (int &i : b)
    cin >> i;

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      for (int k = 1; k <= 10; k++) {
        for (int l = 1; l <= 10; l++) {
          vector<int> c = {i, j, k, l};
          if ((abeatb(a, b) && abeatb(b, c) && abeatb(c, a)) ||
              (abeatb(a, c) && abeatb(b, a) && abeatb(c, b))) {
            cout << "yes\n";
            // printf("%d %d %d %d", i, j, k, l);
            return;
          }
        }
      }
    }
  }
  cout << "no\n";
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
