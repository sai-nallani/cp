#include <iostream>
using namespace std;

void bruteMem() {
	int n;
	cin >> n;
	
	if (n%4==0||n%7==0||n%44==0||n%47==0||n%74==0||n%77==0||n%444==0||n%447==0||n%474==0||n%477==0||n%744==0||n%747==0||n%774==0||n%777==0) cout << "YES";
	else cout << "NO";
}

bool isMagicNumber(int x) {
	bool b = false;
	while (x > 0) {
		int digit = x % 10;
		if (digit == 4 || digit == 7)
			{x = x/10;
			b = true;}
		else
			b = false;
	}
	return b;
}

void iterate() {
	int n;
	bool b = false;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		if (isMagicNumber(i)) {
			if (n % i == 0) {
				b = true;	
			}
		}
	}
	if (b) cout << "YES"; else cout << "NO";
}
int main() {
	iterate();
	// isMagicNumber(47);
	return 0;
}