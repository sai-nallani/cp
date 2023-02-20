#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lowestPrimeFactor(int a) {
    for (int i = 2; i<=a/2; i++) {
        if (a%i == 0)
            return i;
    }
    return a;
}
bool isDivisable(vector<int> arr, int num) {
    if (!num) return false;
    for (int i: arr) {
        if (num % i != 0)
            return false;
    }
    return true;
}
int LCM(vector<int> arr, int n) {
    int x = 0;
    int m = 1;
    for (int i: arr)
        m*=i;
    int max = *max_element(arr.begin(), arr.end());
    
    while (!isDivisable(arr, x) && x<=m) {
        x+=max;
    }
    return x;
}
int check(vector<int>&b, int n) {
    bool x = true;
    for (int i : b) {
        if (i%n !=0)
            x = false;
    }
    return x;
}
int getTotalX(vector<int> a, vector<int> b) {
    // get lcm of a
    // see how many multiples of lcm are factors of b
    int x = LCM(a, a.size());
    if (not x) return 0;
    int ct = 0;
    int min = *(min_element(b.begin(), b.end()));
    for (int i = x; i <= min; i+=x) {
         if (check(b, i)){
            ct++;
         }
    }
    return ct;
}
int main() {
	vector<int> a = {100,99,98,97,96,95,94,93,92,91};
	vector<int> b = {1,2,3,4,5,6,7,8,9,10};
	cout << getTotalX(a, b);
}