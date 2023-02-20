// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int abs(int a) {
	if (a<0)
		return (-1*a);
	return a;
}
int main() {
	ifstream fin("teleport.in");
	ofstream fout("teleport.out");
	int a,b,x,y;
	int dis = 0;
	fin>>a>>b>>x>>y;
	int curPos;

	if (abs(a-y) < abs(a-x)) {
		curPos = x;
		dis=abs(b-curPos)+(a-y);
	} else {
		curPos = y;
		dis=abs(b-curPos)+(a-x);
	}
	
	if (abs(a-b) < dis)
		fout << abs(a-b);
	else
		fout << dis;
	
}