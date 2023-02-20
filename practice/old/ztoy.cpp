#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int maxTenPower(int n) {
	return floor(log(n));
}

int main() {
	cout << maxTenPower(1000) << '\n';
	cout << maxTenPower(12214) << '\n';
	return 0;
}