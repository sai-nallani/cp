#include <iostream>
using namespace std;
void swap(char&a, char&b) {
	char c = a;
	a = b;
	b = c;
}

int main() {
	int n, t;
	cin >> n >> t;
	char q[n];
	cin >> q;

	while (t>0) {
		for (int i = 0; i < n-1; i++) {
			if (q[i] == 'B' && q[i+1] == 'G') {
				swap(q[i], q[i+1]);
				i++;
			}
		}
		t--;

	}
	cout << q;
}
