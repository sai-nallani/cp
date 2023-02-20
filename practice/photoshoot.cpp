#include <iostream>
#include <string>

using namespace std;
int n;
bool s[20005];
bool tmp[20005];
int maxInEven = 0;
int res = 0;
void check(int l) {
  int x = 0;
  for (int i = 1; i < n; i += 2) {
    if (!s[i])
      x++;
  }
  if (x > maxInEven) {
    maxInEven = x;
    res = l;
  }
}
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    s[i] = (c == 'H');
    cout << s[i];
  }
  for (int i = 0; i < n; i++) { // min moves
    for (int p = 0; p <= n; p++) {
      for (int j = 0; j < p; j++) {
        s[j] = !s[j];
      }
      cout << endl;
      for (int t = 0; t < n; t++)
        cout << s[t];
      cout << ' ' << maxInEven;
      check(i);
    }
  }
  cout << endl <<res;
  return 0;
}
