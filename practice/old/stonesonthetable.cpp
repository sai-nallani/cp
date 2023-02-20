#include <iostream>
#include <string>
#include <set>
using namespace std;
int iterate(int n, string s) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == s[i-1] && i > 0)
			++res;
	}
	return res;
}

int main() {
	string s;
	int n;
	cin >> n >> s;
	
	cout << iterate(n, s);
	
	
}