#include <algorithm>
#include <iostream>

using namespace std;


int main() {
  int ans = 0;
  int n;
  cin >> n;
  int dif[n];
  for(int&i:dif)cin>>i;
  for(int i=0;i<n;i++){
    int j; cin >> j;
    dif[i] -= j;
  }
  int first_nonzero = 0;
  while (true) {
    while (dif[first_nonzero] == 0 && first_nonzero < n) first_nonzero++;
    if (first_nonzero == n) break;

    auto sgn = [&](int x) {
      if (x < 0) return -1;
      if (x > 0) return 1;
      return 0;
    };
    int r = first_nonzero;
    while (r < n && sgn(dif[r + 1]) == sgn(dif[first_nonzero])) r++;
    for (int i = first_nonzero; i <= r; i++) {
      if (dif[i] < 0) 
        ++dif[i];
      else
        --dif[i];
    }
    ++ans;
  }
  cout << ans;
  return 0;
}
