#include <iostream>
using namespace std;

int reverse(int x) {
	int y = 0;
	while (x > 0) {
		int digit = x % 10;
		y += y*10+digit;
		x /= 10;
	}
	return y;
}
int main() {
	
}