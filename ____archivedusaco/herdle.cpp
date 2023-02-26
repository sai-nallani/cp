#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    string answer, guess = "";
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        answer += s;
    }
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        guess += s;
    }
    vector<int> freqCorrect(26, 0);
    vector<int> freqGuess(26, 0);
    int green, yellow = 0;
    for (int i = 0; i < 9; i++) {
        if (answer.at(i) == guess.at(i)) green++;
        freqCorrect[answer.at(i) - 'A']++;
        freqGuess[guess.at(i) - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        yellow += min(freqCorrect[i], freqGuess[i]);
    }
    yellow -= green;
    cout << green << '\n';
    cout << yellow;
}