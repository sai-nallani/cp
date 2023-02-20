#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int scores[n];

    for (int i = 0; i<n; i++) {
        cin >> scores[i];
    }
    int kScore = scores[k-1];

    int x = 0;
    for (int i = 0; i<n; i++) {
        if (scores[i]>=kScore && scores[i]>0) {
            x++;
        }
    }
    cout << x;
    cout << "\nHi!";
}