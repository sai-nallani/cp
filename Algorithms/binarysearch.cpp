#include <iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
	if (right>=left) {
		int mid = left + (right-left) / 2;
		if (arr[mid] == target)
			return mid;
		else if (arr[mid] > target)
			return binarySearch(arr, left, mid - 1, target);
		else
			return binarySearch(arr, mid+1, right, target);
	}
	return -1;
}

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int target;
	cin >> target;
	int len = sizeof(arr)/sizeof(arr[0]);
	cout << binarySearch(arr, 0, len-1, target);
	return 0;
}