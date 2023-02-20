#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int*a, int n, int x) {
	int l = 0;
	int r = n - 1;
	while (l<=r) {
		int mid = l + (r-l) / 2;
		if (a[mid] == x) return mid;
		else if (a[mid] >= x) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	int shops[n+1]; for (int&i:shops) cin>>i;
	int q; cin >> q;
	int res[q];
	for (int i = 0; i < q; i++) {
		int a; cin >> a;
		shops[n] = a; sort(shops, shops+n);
		
		res[i] = binarySearch(shops, n, a);
	}
	for (int i : res) cout << i << '\n';
	return 0;
}