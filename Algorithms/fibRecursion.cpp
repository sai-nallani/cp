#include <iostream>
#define NIL -1
#define MAX 100
using namespace std;

long long lookup[MAX];
void _lkup() {
	for (long long&i: lookup)
		i = NIL;
}

int fib(int n) {
	if (lookup[n] == NIL) {
		if (n <= 1)
			lookup[n] = n;
		else
			lookup[n] = fib(n-1) + fib(n-2);
	}
	return lookup[n];
}

long long bigFib(int n) {
	if (lookup[n] == NIL) {
		if (n <= 1)
			lookup[n] = n;
		else
			lookup[n] = fib(n-1) + fib(n-2);
	}
	return lookup[n];
}
int main() {
	cout << "Enter a value to compute till in the Fibonacci sequence: ";
	int n;
	cin >> n;
	_lkup();
	for (int i = 0; i<n; i++) {
		cout << bigFib(i) << ' ';
	}
		
	return 0;
}