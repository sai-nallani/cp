#include <iostream>
#include <string>
using namespace std;

void swap(int&a, int&b) {
	int c = a;
	a = b;
	b = c;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
	string s, res = "";
	cin >> s;
	int l = s.length() / 2 + 1;	
	int arr[l];
	int ct = 0;
	for (auto &c: s) {
		
		if (c == '1' || c == '2' || c == '3') {
			arr[ct] = c - '0';
			ct+=1;
		}
	}
	bubbleSort(arr, l);
	for (int i = 0; i<l-1; i++) {
		string m = to_string(arr[i])+'+';
		res.append(m);
	}
	string p = to_string(arr[l-1]);
	res.append(p);
	cout << res;
}