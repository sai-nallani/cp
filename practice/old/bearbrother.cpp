#include <iostream>
#include <cmath>
#define el '\n'
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	double equal = log(a/b)/(log(2) - log(3));
	if (ceil(equal) - equal < 0.0000001)
		cout << ceil(equal)+1;
	else
		cout << ceil(equal);
	return 0;
}