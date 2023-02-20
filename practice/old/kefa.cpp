	#include <iostream>
	using namespace std;

	bool isDecreasing(int arr[], int s) {
		bool b = true;
		for (int i = 1; i < s; i++) {
			if (arr[i-1] > arr[i]) {
				b = false;
			}
		}
		return b;
	}
	int solve(int arr[], int s) {
		int N = s;
		while (s>0) {
			int a[s];
			bool b = false;
			for (int i = 0; i <= N-s; i++) {
				int p = 0;
				for (int j = i; j < i+s; j++) {
					a[p] = arr[j];
					p++;
				}
				
				if (isDecreasing(a, s)) {
					b = true;
					break;
				}
			}
			if (b) break;
			s--;
		}
		return s;
	}
	void best() {
		int n;
		cin >> n;
		int earnings[n];
		int current_earning;
		int final_count = 0;
		int local_count = 1;
		for (int i = 0; i < n; i++) {
			cin >> earnings[i];
			if (i == 0) {
				current_earning = earnings[i];
			} else { // i has to be greater than 0
				if (earnings[i] >= current_earning) { // if current value is not decreasing than previous value
					local_count++;
					current_earning = earnings[i]; // update CE for next iteration
				} else { // its decreasing
					if (local_count > final_count) {
						final_count = local_count;
						
					}
					local_count = 1;
					current_earning = earnings[i];
				}
			}
		}
		if (local_count > final_count) final_count = local_count;
		cout << final_count;
	}
	int main() {
		// int s;
		// cin >> s;
		// int arr[s];
		// for (int&i : arr) cin >> i;
		
		// cout << solve(arr, s);
		best();
		return 0;
	}