#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printArr(int*p) {
  cout << *p << *(p+1) << *(p+2) << *(p+3);
}
void solve() {
  int N;
  cin >> N;
  vector<string> blocks;
  string temp = "";
  for (int i = 0; i < 4; i++)
    cin >> temp, blocks.push_back(temp);
  sort(blocks.begin(), blocks.end());
  while (N--) {
    string word;
    cin >> word;
    vector<string> unusedBlocks = blocks;
    bool gotWord = false;
    do {
      vector<bool> flagArr(4, false);
      int x = 0;
      for (char c : word) {
        bool moveOn = false;
        for (int i = 0; i < unusedBlocks.size(); i++) {
          string block = unusedBlocks[i];
          for (char l : block) {
            // cout << ' ' << l << c;
            if (l == c && !flagArr[i]) {
              flagArr[i] = true;
              moveOn = true;
              // cout << 'h';
              x++;
              break;
            }
          }
          if (moveOn)
            break;
        }
      }
      // cout << '\n' << unusedBlocks[0] << ' ' << unusedBlocks[1] << ' ' << unusedBlocks[2] << ' ' << unusedBlocks[3]; 
      if (x == word.length()) gotWord = true;
    } while (!gotWord &&
             next_permutation(unusedBlocks.begin(), unusedBlocks.end()));
    if (gotWord)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}

int main() {
  solve();
  return 0;
}
