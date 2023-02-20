#include <iostream>
#include <vector>
#include <string>
using namespace std;
int naiveApproach(int N, string S)
{
    int res = 0;
    for (int i = 3; i <= N; i++)
    {
        for (int j = 0; j <= N - i; j++)
        {

            int G = 0;
            int H = 0;
            for (int k = j; k < j + i; k++)
            {
                if (S[k] == 'G')
                    G++;
                else
                    H++;
            }
            if (G == 1 || H == 1)
                res++;
        }
    }
    return res;
}
long long int betterApproach(int N, string S) {
  long long int ans = 0;
  for (int i = 0; i < N; i++) {
    int g = 0;
    int h = 0;
    for (int j = i; j < N; j++) {
      if (S[j] == 'G')g++;
      else h++;
      if (g+h>=3 && (g == 1 || h == 1)) {
        ans++;
      }
    }
  }
  return ans;
}
int main()
{
    int n;
    string s;
    cin >> n >> s;
    cout << betterApproach(n, s);
    return 0;
}
