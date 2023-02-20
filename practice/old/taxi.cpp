#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int groups[n];
	for (int&i:groups)
		cin >> i;
	
	for (int i = 0; i < n; i++) {
		bool remove = false;
		for (int j = i+1; j < n; j++) {
			if (groups[i] + groups[j] <= 4 && groups[i] != -1){
				n--;
				remove = true;
				break;
			}
		}
		if (remove)
			groups[i] = -1;
	}
	cout << n;
	return 0;
}