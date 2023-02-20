#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int calculateScore(int arr[], int len) {
	set<int> s(arr, arr+len);
	return s.size();
}
int calculateMinStrength(int arr[], int k, int n) {
	int combinations[k][n];
}
int main() {
	int t,n=0;
	cin >> t;
	for (int i = 0; i<t; i++) {
		cin >> n;
		int powers[n];
		for (int i = 0; i<n; i++) {
			cin >> powers[i];
		}
		sort(powers, powers+n);
 	}
	
		
}