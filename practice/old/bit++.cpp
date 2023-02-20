#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd.at(1) == '+') {
            x++;
        } else if (cmd.at(1) == '-') {
            x--;
        }
    }
    cout << x;
    return 0;
}