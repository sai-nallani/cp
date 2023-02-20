#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int reports[n];
	for (int&i:reports)cin>>i;
	int folders[n];
	int folder_count = 0;
	int file_count = 0;
	int local_negative = 0;
	int pv;
	for (int i = 0; i < n; i++) {
		int a = reports[i];
		file_count++;
		if (a < 0) {
			local_negative++;
		}
		if (reports[i+1] < 0 && local_negative == 2) {
			folders[folder_count] = file_count;
			file_count = 0;
			folder_count++;
			local_negative=0;
		} else if (i==n-1) {
			folders[folder_count] = file_count;
			folder_count++;
		}
	}
	cout << folder_count << '\n';
	for (int i = 0; i < folder_count; i++) cout << folders[i] << " ";
}