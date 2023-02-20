#include <iostream>
#include <algorithm>
using namespace std;

int totalCost(int w, int k) {
	int money = 0;
	for (int i = 1; i<=w; i++) {
		money += k*i;
	}
	return money;
}
int main() {
	int k, n, w;
	cin >> k >> n >> w;
	int m = totalCost(w, k);
	if (m > n) {
		cout <<  m-n;
	} else {
		cout << 0;
	}
	
	return 0;
}