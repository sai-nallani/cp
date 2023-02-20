#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool b = false;
	for (char c : s) {
		if (c == 'H' || c == 'Q' || c == '9') {
			b = true;
		}
	} 
	if (b) cout << "YES";
	else cout << "NO";
	return 0;
}