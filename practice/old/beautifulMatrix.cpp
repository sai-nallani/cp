#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matrix[5][5];
    int moves = 0;
    for (int i = 0; i<5;i++) {
        for (int j = 0; j<5;j++) {
            cin >> matrix[i][j];
            if (matrix[i][j]) {
                moves+=abs(3-(j+1))+abs(3-(i+1));
            }
        } 
    }
    cout << moves;
}