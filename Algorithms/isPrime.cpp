#include <iostream>

using namespace std;

bool isPrime(int a) {
    for (int i = 2; i<= a/2; i++) {
        if (a%i == 0)
            return false;
    }
    return true;
}

int main() {
	int x;
	cin >> x;
	for (int i = 0; i<1000; i++) {
		cout << i << " " << isPrime(i) << '\n';
	}
	return 0;
}