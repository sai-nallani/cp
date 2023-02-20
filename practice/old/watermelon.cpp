#include <iostream>

using namespace std;

bool splitWatermelon(int w) {
    if (w<=2) return false;
    if (w%2==0) {
        return true;
    }
    return false;
}

int main() {
    int x;
    cin >> x;
    if (splitWatermelon(x))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}