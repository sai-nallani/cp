#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int lecture_words, keywords;
	cin >> lecture_words >> keywords;
	
	string words_to_use[keywords];
	map<string,string> words;
	
	string a, b;
	for (int i = 0; i < keywords; i++) {
		cin >> a >> b;
		if (a.length() <= b.length()) b = a;
		words[a] = b;
	}
	string s;
	for (int i = 0; i < lecture_words; i++) {
		cin >> s;
		cout << words[s] << " ";
	}
	
	
	return 0;
}