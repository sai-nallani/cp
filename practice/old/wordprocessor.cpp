// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int len(string s) {
	s.erase(remove(s.begin(),s.end(),' '),s.end());
	return s.length();
}
int main() {
	int n, k;
	ifstream fin("word.in");
	ofstream fout("word.out");
	fin >> n >> k;
	string arr[n];
	for (auto&s: arr) {
		fin >> s;
	}
	int i = 0;
	while (n>i){
		string s = "";
		while (len(s) + arr[i].length() <= k) {
			s.append(arr[i]);
			if (len(s) + arr[i+1].length() <= k && n>(i+1))
				s.append(" ");
			i++;
		}
		fout << s << '\n';
	}
	
}

