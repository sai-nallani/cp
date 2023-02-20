#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Number of Problems: ";
    cin >> n;
    int x[n][3];
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cout << "approvals: ";
        scanf("%d %d %d", &a, &b, &c);
        x[i][0] = a;
        x[i][1] = b;
        x[i][2] = c;
    }
    int problemsSolved = 0;
    for (int i = 0; i < n; i++)
    {
        // x[i] == current problem's agreableness
        int z = 0;
        for (int j = 0; j < 3; j++)
        {
            if (x[i][j] == 1)
            {
                z++;
            }
        }
        if (z >= 2)
        {
            problemsSolved++;
        }
    }
    cout << problemsSolved;
}