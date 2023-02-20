#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	set<char> res;
	for (char c: s) {
		res.insert(c);
	}
	
	if (res.size() % 2 == 0) {
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}
	return 0;
}