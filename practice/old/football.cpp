#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	int r[s.length()];
	for (int & i : r) i = 0;
	int x = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == s[i+1]) 
			x++;
		else {
			x++;
			r[i] = x;
			x = 0;
		}
	}	
	int g = *max_element(r, r+s.length());
	if (g >= 7) cout << "YES";
	else cout << "NO";
	return 0;
}