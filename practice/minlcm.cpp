#include <iostream>

#define n1 "\n"
using namespace std;

int euclid_gcd(int a, int b) {
  if (a % b == 0) return b;
  if (a % (a % b) == 0) return (a % b);
  return euclid_gcd(b, a % b);
}
int lcm(int a, int b) {
  return (a * b) / euclid_gcd(a, b);
}
void solve() {
  int n;
  cin >> n;
  if (n % 2 == 0) cout << n / 2 << ' ' << n / 2;

}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
