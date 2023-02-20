#include <iostream>
#include <algorithm>
using namespace std;
int sum(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    return s;
}
int main() {
    int n;
    cin >> n;
    int other_n = n;
    int a,b;
    a = 0; b = 0;
    int coins[n];
    for (int&i : coins)
        cin >> i;
    sort(coins, coins+n);
    int s = (sum(coins, n) / 2) + 1;
    while (b < s) {
        b += coins[--n];
    }
    cout << other_n - n;
}