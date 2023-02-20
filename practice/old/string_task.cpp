#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	string res;
	cin >> s;
	for (int i = 0; i<s.length(); i++) {
		s[i] = tolower(s[i]);
	}
	string vowels = "aeiouy";
	
	for (int i = 0; i<s.length(); i++) {
		bool flag;
		for (int j = 0; j<vowels.length(); j++) {
			if (s.at(i)!= vowels.at(j)) {
				flag = true;
			} else {
				flag = false;
				break;
			}
		}
		if (flag) {
			res+=".";
			res+=s.at(i);
		}
	}
	cout << res;
	return 0;
}