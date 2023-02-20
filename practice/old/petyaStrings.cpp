#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2;
    cin >> s2 >> s1;
    int dif = 0;
    transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c) {return toupper(c);});
    transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c) {return toupper(c);});
    for (int i = 0; i<s1.length(); i++) {
        if (s1.at(i) > s2.at(i)) {
            dif=-1;
            break;
        } else if (s1.at(i) < s2.at(i)) {
            dif = 1;
            break;
        } else {
            dif = 0;
        }
    }
    cout << dif;
    
    return 0;
}