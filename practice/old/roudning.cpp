#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	if (n%10 >= 5)
		n += 10 - (n % 10);
	else if (n % 10 <= 4)
		n -= n % 10;
	cout << n;
}