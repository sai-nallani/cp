#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  freopen("paint.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("paint.out", "w", stdout);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  // check if overlap
  if (a <= c && c <= b || a <= d && d <= b || c <= a && a <= d || c <= b && b <= d) {
    cout << max(b, d) - min(a, c);
  } else {
    cout << abs(a - b) + abs(c - d);
  }
  return 0;
}
